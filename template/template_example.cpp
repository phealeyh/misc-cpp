#include <iostream>

using namespace std;
/* Function prototypes */

template <class numbers> numbers add(const numbers& n1, const numbers& n2){
	return n1 + n2;
} // a method that returns a generic data type


template <typename dataType> class phealey {
	public:
		dataType data;
		
		dataType getData(){
			return data;
		}
		
		void setData(dataType T){
			data = T;
		}
};

int main(){
	double number_one = 3.3, number_two = 2.1, total;
	total = add(number_one,number_two);
	cout << "The total is " << total << "\n";
}
