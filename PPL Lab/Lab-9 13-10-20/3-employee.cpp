//Write a program in c++ by creating an 'Employee' class having the following functions and print the final salary.
//
//     1 - 'AddInfo()' which takes the salary, number of hours of work per day of employee as parameters
//
//     2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
//
//     3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.

#include<iostream>
using namespace std;

class Employee
{
private:
    int salary, workHour;
public:
  void AddInfo(int s,int wh)
    {
        salary = s;
        workHour = wh;
    }

    void AddSal()
    {
        if(salary<500)
        {
            salary = salary  +10;

        }

    }

    void AddWork()
    {
        if(workHour>6)
            salary = salary  + 5;
    }

    void print()
    {
        cout<<"Work Hour : "<<workHour<<endl;
        cout<<"Final salary = "<<salary;
    }


};


int main()
{
    Employee emp1 ;
    int s,wh;
    cout<<"Enter the of Employee salary, number of hours of work per day of employee : \n";
    cin>>s>>wh;
    cout<<endl;
    emp1.AddInfo(s,wh);
    emp1.AddSal();
    emp1.AddWork();
    emp1.print();


    cout<<endl;



    return 0;
}
