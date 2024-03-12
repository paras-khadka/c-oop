#include<iostream>
using namespace std;
class ff
{
	public:
		string real_name;
		string game_name;
		float kd;
		string headshot_rate;
};
int main()
{
	ff f;
	f.real_name="paras khadka";
	f.game_name="CA_Oldmonk";
	f.headshot_rate="97%";
	f.kd=5;
	cout<<"real name:"<<f.real_name<<endl;
	cout<<"game name:"<<f.game_name<<endl;
	cout<<"kd in game:"<<f.kd<<endl;
	cout<<"headshot rate:"<<f.headshot_rate<<endl;
	cout<<"basically known as baap and experince wala kheladi"<<endl;
	cout<<endl;
ff *a= new ff();
	a->real_name="amit bhalu";
	a->game_name="sk zennie";
	a->headshot_rate="headshot rate re mg le red ni handaina ";
	a->kd=0.2;
	cout<<"real name:"<<a->real_name<<endl;
	cout<<"game name:"<<a->game_name<<endl;
	cout<<"kd in game:"<<a->kd<<endl;
	cout<<"headshot rate:"<<a->headshot_rate<<endl;
	cout<<"basically known as noob and son of oldmonk"<<endl;
	cout<<endl;
	return 0;
}
