#include "Integer.h"

Integer::Integer(int num)
{
	this->_val = num;
}

bool Integer::isPrintable() const
{
	return true;
}

std::string Integer::toString() const
{
	return "Integer";
}

std::string Integer::getVal() const
{
	return std::to_string(this->_val);
}