#ifndef PLAYER2_H_
#define PLAYER2_H_
#include<string>
#include"players.hpp"
#include<iostream>
using namespace std;

class Player2 : public Players
{
public:
	Player2();
	Player2(int &new_health,string &give_name,int &new_power,int &new_round);
	//virtual void FightPattern();
	//friend bool Player1::increaseDefense()
	//friend bool Player1::increasePower()
	//int showHealth();
	//void decreaseHealth();
	//friend void Player1::decreaseHelth_double(int power);

	virtual void winChant(); // winning chant.
	//virtual attack();

};
#endif

