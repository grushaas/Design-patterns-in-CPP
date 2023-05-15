#include "../include/SqlSelectQuery.h"
#include <iostream>

using namespace std;

SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddColumn(const std::vector<std::string>& columns) noexcept
{
	db.columns = columns;
	return *this;
}

SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddFrom(const string table)
{
	db.table = table;
	return *this;
}

SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddWhere(const std::map<std::string, std::string>& kv) noexcept
{
	
	db.terms = kv;
	return *this;
}

string SqlSelectQueryBuilder::BuildQuery()
{
	string query = "SELECT ";

	//Columns
	if (db.columns.size() == 0)
	{
		query += "* ";
	}
	else 
	{
		const int size = db.columns.size();
		for(int i = 0; i < db.columns.size(); ++i)
		{
			if(i == size - 1)
			{
				query += db.columns[i] + " ";
			}
			else
			{
				query += db.columns[i] + ", ";
			}
		}
	}

	//Table
	query += "FROM " + db.table + " ";

	//Where
	query += "WHERE ";
	if (db.terms.size() > 1)
	{
		for (map<string, string>::iterator it = db.terms.begin(); it != db.terms.end(); it++)
		{
			if (it == --db.terms.end())
			{
				query += it->first + "=" + it->second + ";";
			}
			else
			{
				query += it->first + "=" + it->second + " AND ";
			}
		}
	}
	else
	{
		map<string, string>::iterator it = db.terms.begin();
		query += it->first + "=" + it->second + ";";
	}

	return query;
}
