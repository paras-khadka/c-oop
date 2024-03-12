#include<iostream>
using namespace std;
class employee
{
    public:
    int employee_number;
    string name;
};
int main()
{
    employee e;
    e.employee_number=32;
    e.name="paras";
    cout<<"employee name is:"<<e.name<<endl;
    cout<<"employee number:"<<e.employee_number<<endl;
    employee *w= new employee();
    w->name="sandeep";
    w->employee_number=44;
    cout<<endl;
    cout<<"employee name:"<<w->name<<endl;
    cout<<"employee_nmber:"<<w->employee_number<<endl;
    return 0;
}