#pragma once

#include "Type.h"

class Void : virtual public Type
{
public:

	Void();

	// methods
	bool isPrintable() const override;
	std::string toString() const override;
};