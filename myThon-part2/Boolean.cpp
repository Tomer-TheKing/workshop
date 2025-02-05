#include "Boolean.h"

Boolean::Boolean(bool ToR)
{
	this->_val = ToR;
}

bool Boolean::isPrintable() const
{
	return true;
}

std::string Boolean::toString() const 
{
	return "boolean";
}

std::string Boolean::getVal() const
{
	if (this->_val == true)
	{
		return "true";
	}
	else
	{
		return "false";
	}
}