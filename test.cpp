#include"players.cpp"
#include"player1.cpp"
#include"player2.cpp"
#include"attack.cpp"
#include<iostream>
using namespace std;

int main()
{
	int hp = 100;
	string pl_1 = "player1";
	string pl_2 = "enemy";
	int power = 20;
	int round = 0;
	Player1 p1(hp, pl_1, power, round);
	Player2 p2(hp, pl_2, power,round);
	Attack round1(p1,p2,power, power);

	cout<<"FIRST LEVEL"<<endl;
	round1.StartGame();

	int hplevel2 = 200;
	string pl_level2 = "level 2 boss";
	int power_boss2 = 50;


	Player2 p3(hplevel2,pl_level2,power_boss2,round);
	 Attack round2(p1,p3,power,power_boss2);

	cout<<"SECOND LEVEL"<<endl;
	round2.StartGame();

	// Player2 p4(500,"Enemy",false,30,0);
	// Attack round3(p1,p4,20,60);


	return 0;



}