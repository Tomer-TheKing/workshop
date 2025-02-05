#include "NameErrorException.h"

const char* NameErrorException::what() const noexcept
{
	std::string ret = "NameError : name " + this->name + "is not defined";
	char* toRet = &(ret[0]);
	return toRet;
}