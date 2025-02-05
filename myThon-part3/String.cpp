#include "String.h"
#include <string>

String::String(std::string string) : Sequence()
{
	this->_val = string;
}

bool String::isPrintable() const
{
	return true;
}

std::string String::toString() const
{
	return "string";
}

std::string String::getVal() const
{
	return this->_val;
}