/* The Osoba class Header (Osoba.h) */
#ifndef MESSAGE_H
#define MESSAGE_H
#include <string>   // using string
#include <iostream> 
using namespace std;

// Osoba class declaration
class person {
private:

	string Name;
	string Surname;
	string Pseudonym;

public:

	void setName();
	void setSurname();
	void setPseudonym();
	void getOutput();

};

#endif // MESSAGE_H
