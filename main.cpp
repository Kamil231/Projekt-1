/* The Osoba Class (All source codes in one file) */
#include <iostream>    // using IO functions
#include <string>  // using string
#include "person.h"
using namespace std;

int main() {

	person user;
	user.setName();
	user.setSurname();
	user.setPseudonym();
	user.inverseWords();
	user.setOutput();
	user.changeVowel();
	user.getOutput();
	

	return 0;

}
