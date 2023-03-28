#include<iostream>
#include<string>
using namespace std;

class managePayroll
{
	private:
		int empSalary;
		int empId;
		string empAddress;
		string empName;
		
	public:
		void setempSalary(int salary)
		{
			empSalary = salary;
		}
		
		int getempSalary()
		{
			return empSalary;
		}
		
		void setempId(int ID)
		{
			empId = ID;
		}
		
		int getempId()
		{
			return empId;
		}
		
		void setempAddress(string Address)
		{
			empAddress = Address;
		}
		
		string getempAddress()
		{
			return empAddress;
		}
		
		void setempName(string Name)
		{
			empName =  Name;
		}
		
		string getempName()
		{
			return empName;
		}	
};

int main()
{
	managePayroll Employee;
	int salary, ID;
	string Address, Name;
	
	cout <<"Enter the Employee's Salary : \n";
	cin >> salary;
	Employee.setempSalary(salary);
	cout <<"Enter the employee's Id : \n";
	cin >> ID;
	Employee.setempId(ID);
	cout << "Enter the employee's Address : \n";
	cin >> Address;
	Employee.setempAddress(Address);
	cout <<"Enter the employee's Name : \n";
	cin >> Name;
	Employee.setempName(Name);
	
	cout <<"\nEmployee's Payroll details are\n\n";
	cout <<"Name    : " << Employee.getempName() <<endl;
	cout <<"ID      : " << Employee.getempId() <<endl;
	cout <<"Address : " << Employee.getempAddress() <<endl;
	cout <<"Salary  : " << Employee.getempSalary() <<endl;
	
	return 0;
}
