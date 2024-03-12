#include<iostream>
using namespace std;
class student
{
public:
int roll_number;
string name;
int age;	
};
int main()
{
	student s;
	s.age=20;
	s.name="paras";
	s.roll_number=18;
	cout<<"age of student ::"<<s.age<<endl;
	cout<<"name of student::"<<s.name<<endl;
	cout<<"roll number of student::"<<s.roll_number<<endl;
	cout<<endl;
	student *p= new student();
	p->age=23;
	p->name="laudu";
	p->roll_number=20;
	cout<<"enter the name:"<<p->name<<endl;
	cout<<"enter the age:"<<p->age<<endl;
	cout<<"enter the roll number:"<<p->roll_number<<endl;
	return 0;
}
