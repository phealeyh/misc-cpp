#include <iostream>
using namespace std;

const int stringSize = 100;
/* Functional prototype declartions */
void getword(char word[]);
int getlength(char* word);

int main(){
	char word[stringSize];
	getword(word);
	cout << "The word you have chosen is " << word << " and it is " << getlength(word) << " long";
	cout << "\n";
	return 0;
}

void getword(char* word){
	cout << "Please enter your word:";
	cin.getline(word,stringSize);
}


int getlength(char* word){
	int length = 0;
	while(word[length] != '\0') length++;
	return length;
}
