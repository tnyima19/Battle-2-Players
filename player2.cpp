#include"player2.hpp"



Player2::Player2()
{
	int hp= 100;
	string name = "";
	int power = 20;
	int round = 0;
	SetHealth(hp);
	SetName("");
	//SetDefense(false);
	SetPower(power);
	SetRound(round);
	//this->round = round;

}




Player2::Player2(int &new_health,string &give_name,int &new_power,int &new_round)
{
	SetHealth(new_health);
	SetName(give_name);
	//SetDefense(new_Defense);
	SetPower(new_power);
	SetRound(new_round);
	//this->round = new_round;
}



/*

bool Player1::increasePower()
{
	power = power*2;
}

bool Player1::increaseDefense(bool input)
{	
	defense = power/2;
	//power = power- newDefense;
	return true;
}


void Player2::decreaseHealth()
{
	health = health -power;
}

*/



/*

void Player2::attack()
{
	// decrease health of other player.


}
*/

void Player2::winChant()
{
	cout<<" ENEMY has won"<<endl;
}
