#include <iostream>
#include <string>
using namespace std;

class Onboard
{
	private:
	    int empId;
	    string empAddress;
	    string empFirstName;
	    string empLastName;
	    
	public:
	    Onboard( int ID, string Address, string firstName, string lastName);
	
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
	
	    void setempFirstName(string firstName)
	    {
	        empFirstName = firstName;
	    }
	
	    string getempFirstName()
	    {
	        return empFirstName;
	    }
	
	    void setempLastName(string lastName)
	    {
	        empLastName = lastName;
	    }
	
	    string getempLastName()
	    {
	        return empLastName;
	    }
	
	    string getempName()
	    {
	        return empFirstName + " " + empLastName;
	    }
};
Onboard::Onboard( int ID, string Address, string firstName, string lastName)
{
    setempId(ID);
    setempAddress(Address);
    setempFirstName(firstName);
    setempLastName(lastName);

    cout << "\n\nEmployee Info:\n\n" << endl;
    cout << "Name   : \t\t\t\t" << getempName() << endl;
    cout << "ID     : \t\t\t\t" << getempId() << endl;
    cout << "Address: \t\t\t\t" << getempAddress() << endl;
}

class managePayroll
{
	private:
		int empSalary;
	
	public:
		managePayroll(int salary);
		
		void setempSalary(int salary)
	    {
	        empSalary = salary;
	    }
	
	    int getempSalary()
	    {
	        return empSalary;
	    }
	
};

managePayroll::managePayroll(int salary)
{
	setempSalary(salary);
	
	cout << "Salary: \t\t\t\t" << getempSalary() << endl;
}

class AttendanceRec
{
	private:
		int empattendance;
		
	public:
		AttendanceRec(int days);
		
		void setempattendance(int days)
	    {
	        empattendance = days;
	    }
	
	    int getempattendance()
	    {
	        return empattendance;
	    }
};

AttendanceRec::AttendanceRec(int days)
{
	setempattendance(days);
	
	cout <<"The number of days attended is : \t" << getempattendance() <<endl;
}

class EmployeeSchedule
{
	private:
		int empTime;
		
	public:
		EmployeeSchedule(int Hours);
		
		void setempTime(int Hours)
	    {
	        empTime = Hours;
	    }
	
	    int getempTime()
	    {
	        return empTime;
	    }
};

EmployeeSchedule::EmployeeSchedule(int Hours)
{
	setempTime(Hours);
	
	cout <<"The Number of hours worked in a week :  " << getempTime() <<endl;
}

class Performance
{
	private:
		int empPerformance;
	
	public:
		Performance(int Rate);
		
		void setempPerformance(int Rate)
	    {
	        empPerformance = Rate;
	    }
	
	    int getempPerformance()
	    {
	        return empPerformance;
	    }
};

Performance::Performance(int Rate)
{
	setempPerformance(Rate);
	
	switch(Rate)
	{
		case 1:
			cout << "\nYou Have done an Exellent work!\n\n";
			break;
		case 2:
			cout << "\nYou have done a good work!\n\n";
			break;
		case 3:
			cout << "\nYour work needs need improvement\n\n";
			break;
		default:
			cout << "Invalid input\n";
			break;
	}
}

class Employee
{
	public:
		Employee();
};

Employee::Employee()
{
	int salary, ID, days, Hours, Rate;
    string Address, firstName, lastName;

    cout << "\nEnter the employee's Salary : ";
    cin >> salary;

    cout << "\nEnter the employee's Id : ";
    cin >> ID;

    cout << "\nEnter the employee's Address : ";
    cin >> Address;

    cout << "\nEnter the employee's First Name : ";
    cin >> firstName;

    cout << "\nEnter the employee's Last Name : ";
    cin >> lastName;
	
	cout << "\nEnter the number of days attended in a week : ";
	cin >> days;
	
	cout << "\nEnter the number of hours worked in a week : ";
	cin >> Hours;
	
	cout << "1. Exellent performance\n";
	cout << "2. Good work\n";
	cout << "3. It needs improvement\n";
	
	cout << "\nRate the employee's performance : ";
	cin >> Rate;
	
	Onboard emOnboard(ID, Address, firstName,  lastName);
	managePayroll emPayroll(salary);
	AttendanceRec emAttendance(days);
	EmployeeSchedule emSchedule(Hours);
	Performance emPerformance(Rate);
}

int main()
{
	Employee empDetails;
	
	return 0;
}

