/* The Osoba class Implementation (Osoba.cpp) */
#include "person.h" // user-defined header in the same directory

void  person::setName() {
	cout << "Write name: " << endl;
	cin >> Name;
}
void person::setSurname() {
	cout << "Write surname: " << endl;
	cin >> Surname;
}
void person::setPseudonym() {
	cout << "Write pseudonym: " << endl;
	cin >> Pseudonym;
}
void person::getOutput(){
	cout << Name + "\"" + Pseudonym + "\"" + Surname << endl;
	}
