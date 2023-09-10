#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
    int u=0, c=0, i;
    int user;
    cout<<"|......ROCK     PAPER     SCISSORS     GAME......|"<<endl<<endl;
    cout<<"There are three rounds.Winner is declared after third round"<<endl<<endl<<endl;
    cout<<"Choose 1 for ROCK.\n Choose 2 for PAPER.\n Choose 3 for SCISSORS."<<endl<<endl;
    for(i=0; i<3; i++){
	    cin>>user;
	    if(user==1){
	    	cout<<"You choose ROCK."<<endl;
		}
		else if(user==2){
			cout<<"You choose PAPER."<<endl;
		}
		else if(user==3){
			cout<<"You choose SCISSORS."<<endl;
		}
		int cpu;
		cpu= rand()%3 +1;
		
		if(cpu==1){
	    	cout<<"CPU choose ROCK."<<endl;
		}
		else if(cpu==2){
			cout<<"CPU choose PAPER."<<endl;
		}
		else if(cpu==3){
			cout<<"CPU choose SCISSORS."<<endl;
		}
		
		if(user==cpu){
			cout<<"It's a tie."<<endl;
		}
		else if(user==1){
			if(cpu==2){
				cout<<"PAPER covers the ROCK. And you lose this round!!!!"<<endl;
				c++;
			}
			else{
				cout<<"ROCK breaks the SCISSORS. You win this round!!!!"<<endl;
				u++;
			}
		}
		else if(user==2){
			if(cpu==1){
				cout<<"PAPER covers the ROCK. And you win this round!!!!"<<endl;
				u++;
			}
			else{
				cout<<"SCISSORS cut's the PAPER. You lose this round!!!!"<<endl;
				c++;
			}
		}
		else if(user==3){
			if(cpu==1){
				cout<<"ROCK breaks the SCISSORS. And you lose this round!!!!"<<endl;
				c++;
			}
			else{
				cout<<"SCISSORS cut's the PAPER. You win this round!!!!"<<endl;
				u++;
			}
		}
	}
	cout<<endl<<endl<<endl;
	if(c==u){
		cout<<"NO ONE WIN, IT'S A TIE!!!!"<<endl;
	}
	else if(c>u){
		cout<<"You lose, CPU is the winner!!!!"<<endl;
	}
	else{
		cout<<"CPU lose, You win this match!!!!"<<endl;
	}
	
	return 0;
}
