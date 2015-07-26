#include <iostream>
#include <string>

using namespace std;
/*Functional prototypes*/
void printArray(string *array, const int &size);
void processNames(string *names, const int &size);
void sortList(string *array, const int &size);

void processNames(string *names, const int &size){
	for(int i = 0;i < size; ++i){
		//loop through each array element and collect the names
		cout << "Please enter the name: " << endl;
		cin >> names[i];
	}

}




void printArray(string *array, const int &size){
	for(int i = 0; i < size; ++i){
		cout << array[i] << endl;
	}
}

void sortList(string *array, const int &size){
	for(int i = 0; i < size; ++size){
		
	}
}


int main(){
	int size = 5;
	string names[size];
	cout << size;
	processNames(names, size);
	sortList(names, size);
	printArray(names, size);
	return 0;
}
