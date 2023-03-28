#include<iostream>
using namespace std;

void swap(int & a, int & b)
{
	b = a + b;
	a = b - a;
	b = b - a;
	
	cout << "\nAfter swapping : \n";
	cout << "a = " << a;
	cout << "\tb = " << b;
	
}

int main()
{
	int a, b;
	cout << "Enter two integers to be swapped : \n";
	cin >> a >> b;
	cout << "b = " << b;
	swap(a, b);
	cout << "\nAfter swapping results in main \n";
	cout << "a = " << a;
	cout << "\t b = " << b;
	
	return 0;
}
