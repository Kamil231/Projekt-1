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
	Output = Name + Surname + "\"" + Pseudonym + "\"";	 //zmiana
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
	

void person::inverseWords(){
	int length_Name, length_Surname, length_Pseudonym, a;
	char b;
	length_Name = Name.length();
	length_Surname = Surname.length();
	length_Pseudonym = Pseudonym.length();
	for (int i = 0; i < length_Name / 2; i++){
		a = length_Name - 1 - i;
		b = Name[i];
		Name[i] = Name[a];
		Name[a] = b;
	}
	for (int i = 0; i < length_Surname / 2; i++){
		a = length_Surname - 1 - i;
		b = Surname[i];
		Surname[i] = Surname[a];
		Surname[a] = b;
	}
	for (int i = 0; i < length_Pseudonym / 2; i++){
		a = length_Pseudonym - 1 - i;
		b = Pseudonym[i];
		Pseudonym[i] = Pseudonym[a];
		Pseudonym[a] = b;
	}
	

}

