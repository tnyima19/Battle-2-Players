#include"players.hpp"	

	//construct player1.
Players::Players()// if no name given player1
{
	name = "";
	//name2 = "Player2";
	//setFullHealth();
	//setPower();
	power =0;
	health = 0;
	round = 0;
	//incDefense = false;
	//power = 20;
}


Players::Players(int &new_health,string &give_name,int &new_power, int &new_round)// increase defense
{
	health = new_health;
	name = give_name;
	//incDefense= new_defense;
	power = new_power;
	round = new_round;

}



// //COPY CONSTRUCTOR 
// Players::Players(const Players &rhs){health= rhs.health;name=rhs.name;incDefense=rhs.incDefense;power=rhs.power}


// // move contructor 
// Players::Players(Players &&rhs) : health{rhs.health},name{rhs.health},incDefense{rhs.incDefense},power{rhs.power}{}

//Move assignment,
// //Just use std::swap
// Players::Players& operator=(Players &&rhs){
// 	swap(health,rhs.health);
// 	swap(name,rhs.name);
// 	swap(incDefense,rhs.Defense);
// 	swap(power,rhs.power);

// 	return *this;
// }
// //COPY ASSIGNMENT 
// Players::Players& operator=(const Players &rhs){
// 	Players copy = rhs;
// 	swap(*this, copy);
// 	return *this;
// }


void Players::SetName(string new_name)
{
	name = new_name;

}
bool Players::DefenseState(){
	if(round<=0)
		return false;
	
	this->round--;
	return true;
	
		//return true;
	//incDefense = new_defense;
}
void Players::SetHealth(int new_health)
{
	health = new_health;
}
void Players::SetPower(int new_power)
{
	power = new_power;
}
void Players::SetRound(int &new_round){
	round = new_round;
}
	
void Players::ShowHealth()
{
	for(int i=0;i<health;i++){
		cout<<"||";
	}
}
// bool Players::GetDefense(){
// 	return incDefense;
// }
int Players::GetPower(){
	return power;
}
string Players::GetName(){
	return name;
}
int Players::GetHealth(){
	return health;
}
int Players::GetRound(){
	return round;
}
// void Players::SetRound(int new_round){
// 	round = new_round;
// }

void Players::IncreasingDefense()
{
	//incDefense = true;
	this->round =3;
}
// bool Players::DefenseState(){
// 	if(incDefense == true)
// 		return true;
// 	else 
// 		return false;
// }

void Players::decreaseHealth(int &num)
{
	// //round;
	// if(incDefense ==false && round ==0){
	// 	health =health - power;
	// }
	// else{
		
	// 	health = health + 10 - power;
	// 	round--;
	// 	if(round ==0)
	// 		incDefense=false;
	// }
	health =health - num;


}

//Players::~Players() = default;
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



