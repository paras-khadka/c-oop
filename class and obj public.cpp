#include<iostream>
using std::string;
class footballer
{
   public:
   	string name;
   	int jersy_number;
   	float weight;
   	float height;
   	string postion;
   	void charecter()
   	{
   	     std::cout<<"name "<<name<<std::endl;
		 std::cout<<"jersy  number "<<jersy_number<<std::endl;
		 std::cout<<"weight "<<weight<<std::endl;
		 std::cout<<"postion "<<postion<<std::endl;
		 std::cout<<"height "<<height<<std::endl;	
	}
		
};
int main()
{
	footballer f;
	f.height=6.1;
	f.jersy_number=7;
	f.name="paras";
	f.weight=57;
	f.postion="lwf";
	f.charecter();
	return 0;
}
