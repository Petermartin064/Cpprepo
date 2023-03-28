#include<iostream>
using namespace std;
 class myClass
 {
 	//protected:
 	int a;
 	
 	public:
 		void setClass(int s)
 		{
 			a = s;
		}
		
		int getClass()
		{
			return a;
		}	
 };
int main()
{
	myClass myobj;
	myobj.setClass(10);
	
	cout << myobj.getClass();
	return 0;
}
