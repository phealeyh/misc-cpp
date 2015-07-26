#include <iostream>
#include <list>

using namespace std;
class family{
	private:
		string familyName;
		list<member> family;
			
	public:	
		family(){
			familyName = "hang";
		}

		const string& getFamilyName() const{
			return familyName;
		}
};
