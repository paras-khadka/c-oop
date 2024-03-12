#include<iostream>
using namespace std;
class football_acadamy
{
	public:
	string name;
	string player_postion;//its may eighter lwf,rwf,cf,amf,ss,dmf,cmf,cb,rb,lb,gk
	int jersy_number;
	float weight;
	float height;
};
int main()
{
	football_acadamy first_player;
	first_player.name="paras khadka";
		first_player.player_postion="lwf";
			first_player.jersy_number=7;
				first_player.weight=59;
					first_player.height=6.0;
					cout<<"name:"<<first_player.name<<endl;
					cout<<"jersy number:"<<first_player.jersy_number<<endl;
					cout<<"player position:"<<first_player.player_postion<<endl;
					cout<<"weight:"<<first_player.weight<<endl;
					cout<<"height:"<<first_player.height<<endl;
					cout<<endl;
	
	football_acadamy *second_player= new football_acadamy();
			second_player->name="sandeep khadka";
		second_player->player_postion="extra";
			second_player->jersy_number=17;
			second_player->weight=57;
					second_player->height=5.8;
					cout<<"name:"<<second_player->name<<endl;
					cout<<"jersy number:"<<second_player->jersy_number<<endl;
					cout<<"player position:"<<second_player->player_postion<<endl;
					cout<<"weight:"<<second_player->weight<<endl;
					cout<<"height:"<<second_player->height<<endl;				
					return 0;
}
