#include"player1.hpp"



Player1::Player1()
{
	int hp = 100;
	string p1 = "player";
	int power = 20;
	int round =0;
	SetHealth(hp);
	SetName(p1);
	//SetDefense(false);
	SetPower(power);
	SetRound(round);
	//this->round = round;

}




Player1::Player1(int &new_health,string &give_name,int &new_power,int &new_round)
{
	SetHealth(new_health);
	SetName(give_name);
	//SetDefense(new_Defense);
	SetPower(new_power);
	SetRound(new_round);
	//this->round = new_round;
}


/*
bool Player2::increasePower()
{
	power = power*2;
}

bool Player2::increaseDefense()
{	
	defense = power/2;
	//power = power- newDefense;
}


void Player1::decreaseHealth()
{
	health = health - power;
}

*/



/*
void Player1::attack()
{
	// decrease health of other player.


}
*/
void Player1::winChant()
{
	cout<<" player1 has won"<<endl;
	//return;
}





