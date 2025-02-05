#pragma once

#include <string>

class Type
{
public:
	// getters
	bool get_isTemp();

	// setters
	void set_isTemp(bool setIsTemp);

	// methods
	virtual bool isPrintable() const = 0;
	virtual std::string toString() const = 0;
	
	// getters
	virtual std::string getVal() const = 0;

private:
	bool _isTemp = false;
};
