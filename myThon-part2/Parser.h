#pragma once
#include "InterpreterException.h"
#include "Type.h"
#include "Integer.h"
#include "String.h"
#include "Boolean.h"
#include "Helper.h"
#include <string>
#include <unordered_map>
#include <iostream>
#include <sstream>


class Parser
{
public:
    static Type* parseString(std::string str);
    static Type* getType(std::string &str);

private:

};
