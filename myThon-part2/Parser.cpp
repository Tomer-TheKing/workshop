#include "Parser.h"
#include "SyntaxException.h"
#include "IndentationException.h"
#include <iostream>


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


Type* Parser::getType(std::string& str)
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