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
	Attack();//zero parameter constructor.
	Attack(Player1 player_1, Player2 player_2);
	// Attack(const Attack &rhs);// copy constructor.
	// Attack(const Attack &&rhs);// Move constructor. 
	//void addPlayers(Players players);
	//
	void ShowHealth(Players player);
	void attack(Player1 name_player);
	void attack(Player2 name_player);
	void IncreaseDefense(Player1 player);
	void IncreaseDefense(Player2 player);
	void declareVictor();// function taht checks health after each attack.
	string StartGame();
private:
	//std::vector<Players*> players;
	Player1 player1;
	Player2 player2;
	int size;

};
#endif