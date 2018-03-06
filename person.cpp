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
void person::setOutput(){ //nowa metoda
	Output = Name + "\"" + Pseudonym + "\"" + Surname;	 //zmiana
}

void person::changeVowel(){  //nowa metoda
	int length_Output, isLowercaseVowel, isUppercaseVowel;
	char letter;
	length_Output = Output.length();
	for (int i = 0; i < length_Output; ++i){
		letter = Output[i];
		isLowercaseVowel = (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
		isUppercaseVowel = (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');
		if (isLowercaseVowel || isUppercaseVowel)
			Output[i] = 'z';
	}
}

void person::getOutput(){
	cout << Output << endl;
}
	

