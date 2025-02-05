#include "Type.h"
#include "InterpreterException.h"
#include "IndentationException.h"
#include "SyntaxException.h"
#include "Parser.h"
#include <iostream>

#define WELCOME "Welcome to Magshimim Python Interperter version 1.0 by "
#define YOUR_NAME "Tomer-TheKing"


int main(int argc,char **argv)
{
	std::cout << WELCOME << YOUR_NAME << std::endl;

	std::string input_string;

	// get new command from user
	std::cout << ">>> ";
	std::getline(std::cin, input_string);
	
	while (input_string != "quit()")
	{
		// parsing command
		try
		{
			Type* var = Parser::parseString(input_string);

			if (var->isPrintable())
			{
				std::cout << var->toString() << std::endl;
				std::cout << var->getVal() << std::endl;
			}
			if (var->get_isTemp())
			{
				delete var;
			}
		}
		catch (SyntaxException what)
		{
			std::cout << what.what() << std::endl;
		}


		// get new command from user
		std::cout << ">>> ";
		std::getline(std::cin, input_string);
	}

	return 0;
}
