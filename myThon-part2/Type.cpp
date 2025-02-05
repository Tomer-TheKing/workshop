#include "Type.h"

bool Type::get_isTemp()
{
	return this->_isTemp;
}

void Type::set_isTemp(bool setIsTemp)
{
	this->_isTemp = setIsTemp;
}