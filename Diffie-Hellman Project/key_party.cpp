//
//key_pary Class Implementation
//Header files - Standard libraries and classes


#ifndef DH_DEPENDENCIES_H_
//OS Specific Includes
#ifdef __linux__ 
//linux specific includes
#elif _WIN32
// windows specific includes
#endif


//standard library includes
#include <iostream> //default include for functionality
#include <string> //get extended string functionality
#include <math.h> //get math functionality for large numbers and complex stuff

#endif

//class headerfile include
#include "key_party.h"


key_party::key_party()
{
}


key_party::~key_party()
{
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Mutators
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int key_party::setcounterpartIKey(unsigned long key)
{
	key_party::counterpartIKey_ = key;
	return 1;
}

int key_party::setInitialKey(unsigned long key)
{
	key_party::initialkey_ = key;
	return 1;
}


unsigned long key_party::generate_exchange(unsigned long num1, unsigned long num2)
{
	//stub Function for compile testing
	std::cout << "this is not a working build";

	return 0; //0 for not working
}




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Accessors
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned long key_party::getInitialKey()
{
	return key_party::initialkey_;
}


unsigned long key_party::getFinalKey()
{
	return key_party::finalkey_;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Predicate Functions
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////