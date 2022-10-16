#include"attack.hpp"


Attack::Attack()
{
	int hp = 100;
	int power = 20;
	int round =0;
	string p1 = "Player1";
	string p2 = "Enemy";
	Player1 player1(hp,p1,power, round);
	Player2 player2(hp, p2,power,round);
}
Attack::Attack(Player1 &player_1, Player2 &player_2,int &new_power1, int& new_power2){
	

	player1 = player_1;
	player2 = player_2;
	player1.SetPower(new_power1);
	player2.SetPower(new_power2);
	// player1 = player_1;
	// int hp = 100;
	// player1.SetHealth(hp);
	// player1.SetPower(new_power1); 
	// player2 = player_2;
	// player2.SetHealth(hp);
	// player1.SetPower(new_power2);
	// int round = 0;
	// player1.SetRound(round);
	// player2.SetRound(round);
	// //power2=new_power2;


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

// void Attack::strike(Player1 &name_player)
// {
// 	if(name_player.GetDefense()==true)
// 		name_player.decreaseHealth(power1-((1/2)*power1));
// 	else
// 		name_player.decreaseHealth(power1);
	
	
// }
// void Attack::strike(Player2 &name_player)
// {
	
// 	if(name_player.GetDefense()==true)
// 		name_player.decreaseHealth(power1-((1/2)*power2));
// 	else
// 		name_player.decreaseHealth(power1);
	
	
// }

void Attack::declareVictor()
{
	if(player1.GetHealth()<=0)
		player2.winChant();
	else if(player2.GetHealth()<=0)
		player1.winChant();
	
}
void Attack::IncreaseDefense(Player1 &player){
	player.IncreasingDefense();
}
void Attack::IncreaseDefense(Player2 &player){
	player.IncreasingDefense();
}

void Attack::ShowHealth(Players &player){
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
		//strike(player2);
		if(player2.DefenseState()==true){
			power= player1.GetPower()/2;
			player2.decreaseHealth(power);
		}
		else{
			power = player1.GetPower();
			player2.decreaseHealth(power);
		}
		cout<<"PLAYER 1 ATTACKED PLAYER 2"<<endl;
	}
	else if(input1 ==2)
	{
		IncreaseDefense(player1);
		cout<<"YOU CHOSE TO DEFEND"<<endl;
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
		//strike(player1);
		if(player1.DefenseState()== true){
			power= player2.GetPower()/2;
			player1.decreaseHealth(power);
		}
		else{
			power = player2.GetPower();
			player1.decreaseHealth(power);
		}
		cout<<"PLAYER 2 ATTACKED PLAYER 1"<<endl;
	}
	else
	{
		IncreaseDefense(player2);
		cout<<"PLAYER 2 DEFENDED"<<endl;
	}

	StartGame();
	//cout<<endl;
	return "FIGHT OVER";
}