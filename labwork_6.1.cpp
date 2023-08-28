#include<iostream>
using namespace std;

class Admin
{
	protected:
		string company_name;
        double manager_salary;
        double employee_salary;
        double total_staff;
        double total_annual_revenue;
        int can_terminate;
	
};

class Manager : public Admin
{
	public:
		myAccess()
		{
			cout << "Enter company name : ";
			cin >> company_name;
			cout << "Enter manager salary : ";
			cin >> manager_salary;
			cout << "Enter employee salary : ";
			cin >> employee_salary;
			cout << "Enter total staff : ";
			cin >> total_staff;
			cout << "Enter total annual revenue : ";
			cin >> total_annual_revenue;
			cout << "Enter candidate terminate : ";
			cin >> can_terminate;
			
			
		}
};

class Employee : public Manager
{
	public:
		myAccess()
		{
			cout << "Company name : " << company_name << endl;
			cout << "Manager salary : " << manager_salary << endl;
			cout << "Employee salary : " << employee_salary << endl;
			cout << "Total staff : " << total_staff << endl;
			cout << "Total annual revenue : " << total_annual_revenue << endl;
			cout << "Candidate terminate : " << can_terminate << endl;
			
		}
		
};

int main()
{
	Employee h1;
	
	h1.Manager::myAccess();
	h1.myAccess();
	
	return 0;
	
}
