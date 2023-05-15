#include <iostream>
#include <map>
#include <string>
#include "../include/SqlSelectQuery.h"


using namespace std;

map<string, string> ComposingWhereQuery()
{
	map<string, string> query;
	map<string, string>::iterator it;
	bool exit = false;
	int count = 0;

	cout << "Создание where запроса: " << endl;
	
	while(exit != true)
	{
		string choice = "";
		string key = "";
		string value = "";

		cout << "Номер запроса: " << count << endl;
		cout << "Введите ключ для запроса: ";
		cin >> key;

		cout << "Введите значение для запроса: ";
		cin >> value;

		query.insert(make_pair(key, value));
		++count;

		cout << "Создадим еще запрос?(yes/no): ";
		cin >> choice;

		if(choice == "no" || choice == "No" || choice == "nO" || choice == "NO")
		{
			exit = true;
		}
	}

	return query;
}

vector<string> ComposingColumnQuery()
{
	vector<string> query;
	int columns = 0;

	cout << "Создание column запроса: " << endl;
	cout << "Сколько будет колонок?(n): ";
	cin >> columns;

	for(int i = 0; i < columns; ++i)
	{
		string value = "";
		cout << "[" << i << "] " << "Название колонки: ";
		cin >> value;

		query.push_back(value);
	}

	return query;
}

int main()
{
	cout << "Добро пожаловать в построение запроса sql!" << endl;

	vector<string> queryColumns = ComposingColumnQuery();
	cout << endl;
	map<string, string> queryWhere = ComposingWhereQuery();

	SqlSelectQueryBuilder queryBuilder;

	queryBuilder.AddColumn(queryColumns);
	queryBuilder.AddFrom("students");
	queryBuilder.AddWhere(queryWhere);

	cout << queryBuilder.BuildQuery() << endl;

	return 0;
}