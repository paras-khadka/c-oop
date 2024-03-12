#include<iostream>
using namespace std;
class employee
{
	private:
		int number;
		string name;
		public:
			float height;
			void setData(int number,string name);
			void getData()
			{
				cout<<"enter the nuber"<<number<<endl;
				cout<<"number"<<name<<endl;
				cout<<"height"<<height<<endl;
			}
};
int main()
{
return 0;
}
