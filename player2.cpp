#include"player2.hpp"



Player2::Player2()
{
	setName("player2");
	setFullHealth();
	setPower();


}




Player2::Player2(string give_name)
{
	setName(give_name);
	setFullHealth();
	setPower();
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
	cout<<" player2 has won"<<endl;
}
