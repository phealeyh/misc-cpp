#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;


/* Program: This program copies the contents of a file and then saves it to a new file */

/*Functional prototypes declarations */
void copyFile(const string &fileIn, const string &fileOut);
void getFiles(string &fileIn, string &fileOut);

int main(){
	string fileIn, fileOut;
	getFiles(fileIn,fileOut);
	copyFile(fileIn,fileOut);
	return 0;			
}

void getFiles(string &fileIn, string &fileOut){
	cout << "Enter file that you want copied: ";
	cin >> fileIn;
	cout << "Please enter the target file: ";
	cin >> fileOut;
}

void copyFile(const string &fileIn, const string &fileOut){
	ifstream fin;
	ofstream fout;
	char ch;
	
	fin.open(fileIn.c_str());
	 if(!fin){
		cerr << "Can't open " << fileIn << "\n"; //cerr is an output error
		exit(1);
	 }
	fout.open(fileOut.c_str());
	 if(!fout){
		cerr << "Can't open " << fileOut << "\n"; //cerr is an output error
		fin.close();
		exit(1);
	 }	
	while (!fin.eof()){
		fin.get(ch);
		fout.put(ch);
	}

	fin.close();
	fout.close();

}


