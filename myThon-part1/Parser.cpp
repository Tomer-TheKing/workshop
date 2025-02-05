#include "Parser.h"
#include "IndentationException.h"
#include <iostream>


Type* Parser::parseString(std::string str)
{
	if (str.length() > 0)
	{
		if (str.substr(0, 1) == "\t" || str.substr(0, 1) == " ")
		{
			throw IndentationException();
		}
		std::cout << str << std::endl;
	}

	return nullptr;
}


