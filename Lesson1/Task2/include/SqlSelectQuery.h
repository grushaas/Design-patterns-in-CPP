#pragma once
#include <string>
#include <vector>
#include <map>

class SqlSelectQuery
{
public:
	std::vector<std::string> columns;
	std::string table;
	std::map<std::string, std::string> terms;
};

class SqlSelectQueryBuilder
{
public:
	SqlSelectQueryBuilder& AddColumn(const std::vector<std::string>& columns) noexcept;
	SqlSelectQueryBuilder& AddFrom(const std::string table);
	SqlSelectQueryBuilder& AddWhere(const std::map<std::string, std::string>& kv) noexcept;
	std::string BuildQuery();

private:
	SqlSelectQuery db;
};