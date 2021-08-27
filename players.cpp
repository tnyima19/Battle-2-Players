#include"players.hpp"	

	//construct player1.
Players::Players()// if no name given player1
{
	name = "Player1";
	//name2 = "Player2";
	setFullHealth();
	setPower();
	//defense = 0;
	//power = 20;
}


Players::Players(string give_name1)// increase defense
{	
	setName(give_name1);
	//name2 = give_name2;
	setFullHealth();
	//defense = 0;
	setPower();
}

void Players::setName(string new_name)
{
	name = new_name;

}

void Players::setFullHealth()
{
	health = 100;
}
void Players::setPower()
{
	power = 20;
}
	
int Players::showHealth()
{
	return health;
}

bool Players::increaseDefense()
{
	increaseDefense = true;
}

void Players::decreaseHealth()
{
	if(increaseDefense = true)
	{
		int new_power = 6;
		health = health -power;
		increaseDefense= false;
	}
	else
	{
		health = health - power;
	}
	//health = health - power;
}

/*
void Player::increaseDefense()// increase power
{

	// how to increase defense,
	// decrease the next attack,
	// increase health

}
	
bool Player::increase_Power()
{

	// doubles attack of
	increasePower = false;




}
void Player::setIncreasePower()
{
	increasePower= true;
}

void Player::normalPower()
{
	power = power/2;
}

void Player::decreaseHealth()// decrease health 
{	
	if(increasePower== true)// if increase power is true
	{

	}
	else
	{

	}

}

void Player::decreaseHealth()



void Player::attack()
{
	// decrease health of other player.

	if(increasePower= true )
	{
		power = power*2;
		cout<<"attacks player2"<<endl;
		// decrease health of player2.
		health = health - power;
		cout<<"Health"<<health<<endl;


	}
	else if(increaseDefense = true)// -> in a friend functino 
	{
		power = power/2;
		cout<<"attcks player"<<endl;
		player2->health = player2->health - power; // remember this is not ouur health we are decreasing but o fplayer2.
		cout<<"Health"<<health<<endl;

	}
	else
	{
		power = power;
		cout<<"attcks player"<<endl;
		player2->health = player2->health - power;
		cout<<"Health"<<health<<endl;
	}

}


*/

void Players::winChant()
{
	cout<<" player has won"<<endl;
}



