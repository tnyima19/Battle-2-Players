#include"attack.hpp"


Attack::Attack()
{
	Player1 player1(100,"Player1",false,20,0);
	Player2 player2(100,"Enemy",false,20,0);
}
Attack::Attack(Player1 player_1, Player2 player_2){
	
	player1 = player_1;
	player2 = player_2;

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

void Attack::attack(Player1 name_player)
{
	
		player1.decreaseHealth();
	
	
}
void Attack::attack(Player2 name_player)
{
	
		player2.decreaseHealth();
	
	
}

void Attack::declareVictor()
{
	if(player1.GetHealth()<=0)
		player2.winChant();
	else if(player2.GetHealth()<=0)
		player1.winChant();
	
}
void Attack::IncreaseDefense(Player1 player){
	player.IncreasingDefense();
}
void Attack::IncreaseDefense(Player2 player){
	player.IncreasingDefense();
}

void Attack::ShowHealth(Players player){
	for(int i=0;i<player.GetHealth();i+=2)
		cout<<"|";
}

string Attack::StartGame()
{
	if(player1.GetHealth()<=0 || player2.GetHealth()<=0)
	{
		declareVictor();
		return "GAME OVER";
	}
	
	int input1;
	int input2;
	cout<<"health P1:";ShowHealth(player1); cout<<"         Health P2:"; ShowHealth(player2); cout<<endl;
	cout<<player1.GetHealth()<<"                                                             "<<player2.GetHealth()<<endl;
	cout<<"player 1 input"<<endl;
	cout<<"choose option 1. attack   2.increase Defense"<<endl;
	cin>>input1;
	if(input1 ==1)
	{
		attack(player2);
		cout<<"player1 attacked player2"<<endl;
	}
	else if(input1 ==2)
	{
		IncreaseDefense(player1);
		cout<<"you choose to Defend"<<endl;
	}

	if(player1.GetHealth()<=0 || player2.GetHealth()<=0)
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
		attack(player1);
		cout<<"player 2 attacked player 1"<<endl;
	}
	else
	{
		IncreaseDefense(player2);
		cout<<"Player 2 chooses to defend"<<endl;
	}

	StartGame();
	//cout<<endl;
	return "FIGHT OVER";
}