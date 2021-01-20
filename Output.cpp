#include "Output.h"

int getValue()
{
	return value;
}

bool setValue(int& _value)
{
	if(_value>MAAX_VAL)
		return false;
	value=_value;
	return true;
}