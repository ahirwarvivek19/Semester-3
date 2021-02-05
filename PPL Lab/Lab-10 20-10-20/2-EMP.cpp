
#include <iostream>
#include<string>
using namespace std;

class Emp
{

protected:
    int emp_no;
    string name;
    string address;
    string department;

public:
    void getInfo()
    {
        cout << "Enter emp_no : ";
        cin >> emp_no;
        cout << "Enter name :";
        getline(cin.ignore(), name);
        cout << "Enter address of employee : ";
        getline(cin, address);
        cout << "Enter department of employee :";
        getline(cin, department);
    }
    void display()
    {
        cout << "Emp No:    " << emp_no << endl;
        cout << "Name:      " << name << endl;
        cout << "Address:   " << address << endl;
        cout << "Department:" << department << endl;
    }
};

class Manager:public Emp
{
    int size;
    Emp* Employees;
public:
    void getInfo()
    {
    	cout<<"Enter the Manger's EmpNo: ";
    	cin>>emp_no;
        cout<<"Enter manager's name': ";
        getline(cin.ignore(), name);
        cout<<"Enter Manager's' Address: ";
        getline(cin, address);
        cout<<"Enter Manager's' Department: ";
        getline(cin, department);
        cout<<"Enter no. of employees under him: ";
        cin>>size;
        
		Employees = new Emp[size];
        
        for(int i=0; i<size; i++)
        {
            cout<<"\nEnter details of employee "<<i+1<<endl;
            Employees[i].getInfo();
        }
    }
    void display()
    {
    	cout<<"\nManager's emp_No:    "<<emp_no<<endl;
        cout<<"Manager's name:        "<<name<<endl;
        cout<<"Manager's address:     "<<address<<endl;
        cout<<"Managers's department: "<<department<<endl;
        cout<<"The list of "<<size<<" employees :"<<endl;

        for(int i=0; i<size; i++)
        {
            Employees[i].display();
            cout<<endl;
        }
    }
};


int
main()
{
    Manager M;
    M.getInfo();
    M.display();

    return 0;
}
