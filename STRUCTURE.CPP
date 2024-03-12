paras
#include<iostream>
void main()
{
    struct student
    {
    char name[20]
    int roll;
    float marks;
    char remarks;
    };
    struct student s;
    cout<<"enter the name"<<endl;
    cin>>s.name
    cout<<"enter the roll number"<<endl;
    cin>>s.roll;
    cout<<"enter the marks "<<endl;
    cin>>s.marks;
    cout<<"enter the remark pass or fail"<<endl;
    cin>>s.remarks;
    cout<<"the student information is:"<<endl;
    cout<<"name"<<setw(5)<<"roll"<<setw(6)<<"marks"<<setw(2)<<"remarks"
    cout<<endl<<"-----------------------------------------------------";
    cout<<s.name<<setw(5)<<s.roll<<setw(6)<<s.marks<<setw(2)<<s.remarks;
}
