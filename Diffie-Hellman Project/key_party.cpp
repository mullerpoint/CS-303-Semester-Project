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
	key_party::counterpartIKey_ = key;
	return 1;
}

int key_party::setInitialKey(boost::multiprecision::cpp_int key)
{
	key_party::initialkey_ = key;
	return 1;
}


boost::multiprecision::cpp_int key_party::generate_exchange(boost::multiprecision::cpp_int num1, boost::multiprecision::cpp_int num2)
{
	//stub Function for compile testing
	std::cout << "this is not a working build";

	return 0; //0 for not working
}




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Accessors
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

boost::multiprecision::cpp_int key_party::getInitialKey()
{
	return key_party::initialkey_;
}


boost::multiprecision::cpp_int key_party::getFinalKey()
{
	return key_party::finalkey_;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Predicate Functions
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////