#ifndef PLAYERS_H_
#define PLAYERS_H_
#include<iostream>
#include<string>
#include<cstddef>
#include<sstream>
#include<string>
using namespace std;
//#define health 100;


// we may need inheritance, because two players have similar things they can do.

class Players
{
public:
	//construct player1.
	Players();// if no name given player1
	Players(int new_health,string give_name,bool new_defense,int new_power,int new_round);
	//void setName(string new_name);
	void SetName(string new_name);
	void SetHealth(int new_health);
	void SetPower(int new_power);
	void ShowHealth();
	void SetDefense(int new_defense);
	void SetRound(int new_round);
	int GetDefense();
	int GetPower();
	string GetName();
	int GetHealth();
	int GetRound();
	// increase defense
	//bool increaseDefense();
	//increasepower();
	//bool increasePower();
	void decreaseHealth();//
	void IncreasingDefense();
	//void attack();
	virtual void winChant();
	//~Players();

private:
	int health;
	string name;
	bool incDefense;
	//string name2;
	//int defense:// let defense be a number that subtracts with power.
	//bool increasePower;
	int power; // 
	int round;
	
};
#endif

// we need two players..

// things two players can do. 