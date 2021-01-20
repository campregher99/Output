#include "Output.h"

int Output::getValue()
{
	return value;
}

bool Output::setValue(int& _value)
{
	if(_value>MAAX_VAL)
		return false;
	value=_value;
	return true;
}