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
	string Output;   //zmiana

public:

	void setName();
	void setSurname();
	void setPseudonym();
	void setOutput();
	void changeVowel();
	void getOutput();
	void inverseWords();

};

#endif // MESSAGE_H
