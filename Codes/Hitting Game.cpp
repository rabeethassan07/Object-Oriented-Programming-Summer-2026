#include<iostream>
using namespace std;
class HittingGame
{
private:
    int players;
    int yourHits;
    int enemyHits;

public:
    // Constructor
    HittingGame()
	{
        yourHits=0;
        enemyHits=0;
    }
    void inputPlayers()
	{
        cout<<"Enter number of players in your team: ";
        cin>>players;
    }

    void playGame()
	{
        int num1, num2;

        for(int i=1;i<=players;i++)
		{
            cout<<"\nRound "<<i<<endl;
            
            cout<<"Enter first number: ";
            cin>>num1;
            cout<<"Enter second number: ";
            cin>>num2;

            if(num1==num2)
			{
                cout<<"Enemy got hit by your team!"<<endl;
                yourHits++;
            }
			else
			{
                cout<<"You got hit by the enemy team!"<<endl;
                enemyHits++;
            }
        }
    }

    void showResult()
	{
        cout<<"\nFinal Result"<<endl;
        cout<<"Your Team Hits: "<<yourHits<<endl;
        cout<<"Enemy Team Hits: "<<enemyHits<<endl;

        if(yourHits>enemyHits)
            cout<<"Your team wins!"<<endl;
        else if(enemyHits>yourHits)
            cout<<"Enemy team wins!"<<endl;
        else
            cout<<"Match draw!"<<endl;
    }
};
int main()
{
    HittingGame game;
    game.inputPlayers();
    game.playGame();
    game.showResult();

    return 0;
}
