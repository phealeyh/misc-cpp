// rememb-o-matic
#include <iostream>
#include <new>
using namespace std;

int main ()
{
  int i,n, *p;
  cout << "How many numbers would you like to type? ";
  cin >> i;
  p = new int[i];
    for (n=0; n<i; n++)
    {
      cout << "Enter number: ";
      cin >> p[n];
    }
    cout << "You have entered: ";
    for (n=0; n<i; n++)
      cout << p[n] << ", ";
    cout << "\n";
    delete[] p;
    return 0;
}

