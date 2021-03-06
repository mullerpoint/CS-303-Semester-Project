//
//key_party Class Declaration
//

#ifndef BOOST_LIBRARIES_H_
#define BOOST_LIBRARIES_H_
#include <boost/multiprecision/cpp_int.hpp> //Boost Multiprecision Library from the Boost 1.60 libraries
											//used for manipulating arbitrarily large numbers 
#include <boost/random.hpp> //boost library for random numbers
#endif

#pragma once
class key_party
{
private:
	unsigned long iteration_;
	boost::multiprecision::cpp_int initialkey_; //the initial value generated by the process
	boost::multiprecision::cpp_int counterpartkey_; //the initial key generated by this objects counterpart
	boost::multiprecision::cpp_int finalkey_; //the final key generated by this object
	boost::multiprecision::cpp_int privateNum_; //the private number used in the key exchange process
	boost::multiprecision::cpp_int generator_; //the generator used by the exchange
public:
	//Constructor Destructor
	key_party();
	~key_party();


	//Mutators
	int setGenerator(int); //set the generator for the exchange
	int setcounterpartIKey(boost::multiprecision::cpp_int); //set counterparts initial key
	int setInitialKey(boost::multiprecision::cpp_int); // sets intial key value
	int setPrivateNum(boost::multiprecision::cpp_int); // sets private number value
	int setFinalKey(boost::multiprecision::cpp_int); //sets the final key 
	boost::multiprecision::cpp_int generate_exchange(boost::multiprecision::cpp_int, boost::multiprecision::cpp_int); //performs the math required by Diffie-Hellman: raises the key value of this object to the selected prime mod a number

	//Accessors
	boost::multiprecision::cpp_int getInitialKey(); //gets this objects initial key - generated by generate_exchange ()
	boost::multiprecision::cpp_int getCounterpartKey(); //gets this object counterpart key
	boost::multiprecision::cpp_int getFinalKey(); //gets this objects final key - generated by generate_exchange ()
	boost::multiprecision::cpp_int getPrivateNum(); //gets the private number of the object
	
};
