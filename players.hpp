#ifndef PLAYERS_H_
#define PLAYERS_H_
#include<iostream>
#include<string>
using namespace std;
//#define health 100;


// we may need inheritance, because two players have similar things they can do.

class Players
{
public:
	//construct player1.
	Players();// if no name given player1
	Players(string give_name1);
	void setName(string new_name);
	void setFullHealth();
	void setPower();
	int showHealth();
	// increase defense
	//bool increaseDefense();
	//increasepower();
	//bool increasePower();
	void decreaseHealth();//
	void IncreasingDefense();
	//void attack();
	virtual void winChant();

private:
	int health;
	string name;
	bool incDefense;
	//string name2;
	//int defense:// let defense be a number that subtracts with power.
	//bool increasePower;
	int power; // 
	
};
#endif

// we need two players..



// things two players can do. 