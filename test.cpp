#include"players.cpp"
#include"player1.cpp"
#include"player2.cpp"
#include"attack.cpp"
#include<iostream>
using namespace std;

int main()
{
	Player1 p1(100,"Player1",false,20,0);
	Player2 p2(100,"Enemy",false,20,0);
	Attack round1(p1,p2);

	//Player1("Tenzing");
	//Player2("enemy");

	//round1->addPlayer(one);
	//round1->addPlayer(two);

	round1.StartGame();

	/*

	// player 2 is auto mated. 

	to do list, 
	how to increase defense of players. 
	increase chances of dodging if defense is increased.
	


	*/
	return 0;






}