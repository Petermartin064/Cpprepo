#include<iostream>
using namespace std;

int a = 400;

namespace first_namespace
{
	void func()
	{
		int b = 200;
		cout << "The variable A in the first namespace is : "<< b;
	}
}
namespace second_namespace
{
	void func()
	{
		int c = 1000;
		cout << "\nThe variable in the second namespace is : " << c;
	}
}
int main()
{
	first_namespace :: func();
	second_namespace :: func();
	
	cout << "\nGlobal space has : " << a;
	
	return 0;
}
