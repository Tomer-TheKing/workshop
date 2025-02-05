#pragma once

#include "Sequence.h"
#include <string>

class String : virtual public Sequence
{
private:

	std::string _val = "";

public:

	String(std::string string);

	// getters
	std::string getVal() const override;

	// methods
	bool isPrintable() const override;
	std::string toString() const override;
};