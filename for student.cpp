#include<iostream>
using namespace std;
class student
{
	public:
	string name;
	int roll;
};
int main()
{
	student s;
	s.name="PARAS";
	s.roll=23;
	cout<<"name:"<<s.name<<endl;
	cout<<"roll:"<<s.roll<<endl;
	student *p= new student();
	{
	p->name="PARAS";
	p->roll=23;
	cout<<"name:"<<p->name<<endl;
	cout<<"roll:"<<p->roll<<endl;
	}
	return 0;
}
