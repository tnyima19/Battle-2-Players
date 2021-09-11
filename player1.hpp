#ifndef PLAYER1_H_
#define PLAYER1_H_
#include<string>
#include"players.hpp"
#include<iostream>
using namespace std;

class Player1 : public Players
{
public:
	Player1();
	Player1(int new_health,string give_name,bool new_defense,int new_power,int new_round);
	//friend bool Player2::increasePower();
	//friend bool Player2::increaseDefense();
	//int showHealth();
	//void decreaseHelth();
	//friend void Player2::decreaseHelth_double(int power); // only access to decrease health of player2
	//virtual attack();

	virtual void winChant(); // winning chant.


};
#endif