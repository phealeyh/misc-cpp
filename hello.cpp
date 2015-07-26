#include <iostream>
#include <string>

using namespace std;

//CLASSES
class person{
	private:
		string firstName;
		string surname;
		int age;

	public:
		person(){
			cout << "Please enter your first name: ";
			 //outputs always have a less than sign
			cin >> firstName;

			cout << "Please enter your surname: ";
			cin >> surname;

			cout << "Please enter your age: ";
			cin >> age;
		}
		
		void setPerson(const string &fName, const string &sName, int personAge){
			firstName = fName;
			surname = sName;
			age = personAge;
		} 
		
		const string& getSurname() const{
			return surname;
		}
		void printPerson(){
			cout << "Your first name is " << firstName << "\n";
			cout << "Your surname is " << surname << "\n";
			cout << "Your age is " << age << "\n";
		} 
		
	}; //always use the semi colon to create classes
//methods of the program

void swap(vector <person> person, int a, int b);

//main method
int main(){
	person one;
	one.printPerson();	
	return 0;
}



