#include<iostream>
using namespace std;

int square(int x)
{
	cout << "The square of X is : "<< x << " is ";
	return x * x;
}
double square (double y)
{
	cout << "\nThe square of Y is : "<< y << " is ";
	return y * y;
}
int main()
{
	cout <<square(7);
	cout <<square(7.5);
}
