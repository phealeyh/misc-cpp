#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Person{
	private:
	string name, date_of_birth, occupation;
	int age;
	public:
		Person(){
			cout << "Please enter your name: " << endl;
			cin >> name;
			cout << "Please enter your age: " << endl;
			cin >> age;
			cout << "Please enter your date of birth: " << endl;
			cin >> date_of_birth;
			cout << "Please enter your occupation: " << endl; 
			cin >> occupation;
		}
		void setPerson(const string &full_name, int current_age, const string &dob, const string person_occupation){		
			name = full_name;
			age = current_age;
			date_of_birth = dob;
			occupation = person_occupation;	
	}

	string getName() const{
		return name;
	}

	int getAge() const{
		return age;
	}

	string get_DOB() const{
		return date_of_birth;
	}

	string getOccupation(){
		return occupation;
	}
		
	
};
int main(){
	vector<Person> myVector; //a vector's size does not need to be known at runtime
	Person person;
	myVector.push_back(person);
	for(int i = 0; i < myVector.size(); ++i){
		cout << "The current person is " << myVector[i].getName() << endl;
		cout << myVector[i].getName() << " is currently " << myVector[i].getAge() << endl;
		cout << myVector[i].getName() << " was born on " << myVector[i].get_DOB() << endl;
		cout << myVector[i].getName() << " currently works as a " << myVector[i].getOccupation() << endl;	
	}
	int size = myVector.size();
	cout << "The size of the vector is " << size << endl;
			
}
