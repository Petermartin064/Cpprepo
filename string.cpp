#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	cout <<"Enter a string of characters \n";
	getline(std :: cin, name);
	cout <<"You entered : " << name <<"\n";
	int size = name.size();
	cout <<"The size of the string is : " <<size;
	
	return 0;
}
