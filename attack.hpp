#ifndef ATTACK_H_
#define ATTACK_H_
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"players.hpp"
#include"player1.hpp"
#include"player2.hpp"
#include<iostream>
#include<vector>
using namespace std;

class Attack{
public:
	Attack();
	//void addPlayers(Players players);
	void attack(string name_player);
	void IncreaseDefense(Players &player);
	void declareVictor();// function taht checks health after each attack.
	string startAttack();
private:
	//std::vector<Players*> players;
	Player1 player1;
	Player2 player2;
	int size;

};
#endif