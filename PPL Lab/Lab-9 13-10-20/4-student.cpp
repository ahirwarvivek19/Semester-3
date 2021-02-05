////Write a program in c++ to print the roll number and average marks of 5 students in three subjects (each out of 100).
//The marks are entered by the user and the roll numbers are automatically assigned.

#include <iostream>
using namespace std;

int count=1;

class Student
{
  int rno;
  public:
  Student()
  {
    rno=count;
    count++;
  }

  float marks[3];


  int getrno(){
    return rno;
  }


  void enter_marks()
  {
    for(int i=0;i<3;i++)
    {
      cin>>marks[i];
    }
  }
  float average()
  {
    float average=(marks[0]+marks[1]+marks[2])/3;
    return average;
  }
};

int main()
{
  Student s[5];
  for(int i=0;i<5;i++)
  {
    cout<<"Enter marks of Student "<<i+1<<":\n";

    s[i].enter_marks();

    cout<<"Roll number of Student "<<i+1<<": "<<s[i].getrno()<<endl;

    cout<<"Average marks of Student "<<i+1<<": "<<s[i].average()<<endl<<endl;
  }

  return 0;
}

