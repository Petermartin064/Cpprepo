#include<iostream>
#include<string>
using namespace std;

class student
{
	public:
		string stud_name;
		string reg_no;
		
		void display()
		{
			cout << "The name of the student is : " << stud_name << " and the registration is : " << reg_no;
		}
};
int main()
{
	student sn1;
	cout << "\nEnter the student name and the registration number\n";
	cin >> sn1.stud_name >> sn1.reg_no;
	sn1.display();
	
	return 0;
}
