#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <string.h>

using namespace std;
/*******************************************\
 Program demonstrating string manipulation
\*******************************************/

const int stringSize = 100;
/* Function prototype declarations */
int stringlength(char string[]);
void getstring(char word[]);

int stringlength(char *string){
	int length = 0;
	while (string[length] != '\0') length++; //terminates at the end of the string with null terminator
	return length;
}

void getstring(char *word){
	cout << "Please enter your text:";
	cin.getline(word,stringSize);
}

int main(){
	char word[stringSize];
	getstring(word);
        cout << "Length of the string is " << stringlength(word) << "\n";
}

