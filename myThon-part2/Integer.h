#pragma once

#include "Type.h"

class Integer : virtual public Type
{
private:

	int _val = 0;

public:

	Integer(int num);

	// getters
	std::string getVal() const override;

	// methods
	bool isPrintable() const override;
	std::string toString() const override;
};