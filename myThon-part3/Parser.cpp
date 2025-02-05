#include "Parser.h"
#include "Integer.h"
#include "Boolean.h"
#include "String.h"
#include "SyntaxException.h"
#include "IndentationException.h"
#include <iostream>

static std::unordered_map<std::string, Type*> _variables;

Type* Parser::parseString(std::string str)
{
	try
	{
		if (getType(str) != NULL)
		{
			Helper::rtrim(str);
			return getType(str);
		}
		else
		{
			throw SyntaxException();
		}
	}
	catch (SyntaxException what)
	{
		throw what;
	}

	return nullptr;
}
//guitar

Type* Parser::getType(std::string str)
{
	if (str.size() == 0)
	{
		throw SyntaxException();
	}
	if (Helper::isInteger(str))
	{
		int newInt = stoi(str);
		Integer* newInteger = new Integer(newInt);
		return newInteger;
	}
	else if (Helper::isBoolean(str))
	{
		bool newVar = false;

		if (str == "True")
		{
			newVar = true;
		}
		Boolean* newBool = new Boolean(newVar);

		return newBool;
	}
	else if (Helper::isString(str))
	{
		String* newStr = new String(str);
		return newStr;
	}
	else
	{
		return NULL;
	}
}

bool Parser::isLegalVarName(std::string str)
{
	if (isdigit(str[0]))
	{
		return false;
	}

	for (int i = 0; i < str.size(); i++)
	{
		if (!(isdigit(str[i]) || str[i] != '_' || islower(str[i]) || isupper(str[i])))
		{
			return false;
		}
	}

	return true;
}

bool Parser::makeAssignment(std::string str)
{
	int index = str.find('=');

	std::string varName = str.substr(0, index);

	return true;
}