//
//key_pary Class Implementation
//

//Header files - Standard libraries and classes
#ifndef CORE_DEPENDENCIES_H_
#define CORE_DEPENDENCIES_H_
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
#include <array> //array for array of primes
#include <sstream> //convert from hex to dec


#ifndef BOOST_LIBRARIES_H_
#define BOOST_LIBRARIES_H_
#include <boost/multiprecision/cpp_int.hpp> //Boost Multiprecision Library from the Boost 1.60 libraries
//used for manipulating arbitrarily large numbers 
#endif


//user defined includes
#include "key_party.h" //class for Alice and Bob objects
#endif
////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Constructor - Destructor
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

key_party::key_party()
{
}


key_party::~key_party()
{
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Mutators
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int key_party::setcounterpartIKey(boost::multiprecision::cpp_int key)
{
	key_party::counterpartkey_ = key;
	return 1;
}

int key_party::setInitialKey(boost::multiprecision::cpp_int key)
{
	key_party::initialkey_ = key;
	return 1;
}

int key_party::setPrivateNum(boost::multiprecision::cpp_int privateNum)
{
	key_party::privateNum_ = privateNum;
	return 1;
}

boost::multiprecision::cpp_int key_party::generate_exchange(boost::multiprecision::cpp_int modPrime, boost::multiprecision::cpp_int basePrime, boost::multiprecision::cpp_int privateNum, bool finalFlag)
{
	//copmute exchange value
	boost::multiprecision::cpp_int exchangeValue;
	exchangeValue = (basePrime^privateNum) % modPrime;

	if (finalFlag) //check to see if this is to generate final or initial key values
		finalkey_ = exchangeValue;
	else
		initialkey_ = exchangeValue;

	return 0; //0 shows its not working
}




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Accessors
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

boost::multiprecision::cpp_int key_party::getInitialKey()
{
	return key_party::initialkey_;
}

boost::multiprecision::cpp_int key_party::getCounterpartKey()
{
	return key_party::counterpartkey_;
}


boost::multiprecision::cpp_int key_party::getFinalKey()
{
	return key_party::finalkey_;
}

boost::multiprecision::cpp_int key_party::getPrivateNum()
{
	return key_party::privateNum_;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Predicate Functions
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////