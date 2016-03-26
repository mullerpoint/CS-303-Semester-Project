#pragma once
class key_party
{
private:
	unsigned long iteration;

public:
	key_party();
	~key_party();

	unsigned long generate_exchange(unsigned long, unsigned long);
};



