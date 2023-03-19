#include <iostream>
#include "SqlSelectQuery.h"

int main()
{
	SqlSelectQueryBuilder queryBuilder;

	queryBuilder.AddColumn("name").AddColumn("phone");
	queryBuilder.AddFrom("students");
	queryBuilder.AddWhere("id", "42").AddWhere("name", "John");

	std::cout << queryBuilder.BuildQuery() << std::endl;

	return 0;
}