#pragma once

#include "string"
#include "InterpreterException.h"

class NameErrorException : public InterpreterException
{
private:
	std::string name = "";
public:
	virtual const char* what() const noexcept;
};
