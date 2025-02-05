#pragma once

#include "Type.h"

class Boolean : virtual public Type
{
private:

	bool _val;

public:

	Boolean(bool ToR);

	// getters
	std::string getVal() const override;

	// methods
	bool isPrintable() const override;
	std::string toString() const override;
};