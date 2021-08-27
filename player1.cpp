#include"player1.hpp"



Player1::Player1()
{
	setName("player1");
	setFullHealth();
	setPower();

}




Player1::Player1(string give_name)
{
	setName(give_name);
	setFullHealth();
	setPower();
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





