#include"attack.hpp"


Attack::Attack()
{
	Player1 player1;
	Player2 player2;
	// create pointers that point to the players.
	//string* player1 = new player1();
	//string* player2 = new player2();
	//player1 = players[0];
	//player2 = players[1];
	//Player1 player1 = new Players1();
	//players[0];
	//Player2 player2 = new Players2();
}
/*

void Attack::addPlayers(Players new_players)
{
	if(size > 2)
	{
		cout<<"cannot add more players"<<endl;
		return ;
	}
	
	else if(size ==0)
	{
		// create new players.
		Player1 player1 = new Player1(new_players);

	}
	else if(size ==1){
		Player2 player2 = new Player2(new_players);
	}
	players.push_back(new_players);
	size++;


}
*/

void Attack::attack(string name_player)
{
	if(name_player == "player1")// attacks
	{
		player2.decreaseHealth();
	}
	else if(name_player == "player2")
	{
		player1.decreaseHealth();
	}
}

void Attack::declareVictor()
{
	if(player1.showHealth()<=0)
		player2.winChant();
	else if(player2.showHealth()<=0)
		player1.winChant();
	
}
void Attack::IncreaseDefense(Players &player){
	player.IncreasingDefense();
}

string Attack::startAttack()
{
	if(player1.showHealth()<=0 || player2.showHealth()<=0)
	{
		declareVictor();
		return "GAME OVER";
	}
	
	int input1;
	int input2;
	cout<<"health P1:"<<player1.showHealth()<<"         Health P2:"<<player2.showHealth()<<endl;
	cout<<"player 1 input"<<endl;
	cout<<"choose option 1. attack   2.increase Defense"<<endl;
	cin>>input1;
	if(input1 ==1)
	{
		attack("player1");
		cout<<"player1 attacked player2"<<endl;
	}
	else
	{
		cout<<"you choose not to attack"<<endl;
	}

	if(player1.showHealth()<=0 || player2.showHealth()<=0)
	{
		declareVictor();
		return "GAME OVER";
	}

	

	cout<<"player 2 input"<<endl;
	cout<<"choose option 1. attack and 2. increase defense"<<endl;
	srand(time(0));
	input2 = (rand()%10)%2;
	if(input2 ==1)
	{
		attack("player2");
		cout<<"player 2 attacked player 1";
	}
	else
	{
		cout<<"Player 2 chooses to defend"<<endl;
	}

	startAttack();
	//cout<<endl;
	return "FIGHT OVER";
}