#include"player2.hpp"



Player2::Player2()
{
	SetHealth(0);
	SetName("");
	SetDefense(false);
	SetPower(0);
	SetRound(0);
	
}




Player2::Player2(int new_health,string give_name,bool new_Defense,int new_power,int new_round)
{
	SetHealth(100);
	SetName(give_name);
	SetDefense(new_Defense);
	SetPower(new_power);
	SetRound(new_round);

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
