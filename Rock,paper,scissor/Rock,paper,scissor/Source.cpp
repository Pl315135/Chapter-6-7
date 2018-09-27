	#include <iostream>
	#include <string>
	#include <stdio.h>      
	#include <stdlib.h>     
	#include <time.h>
	using namespace std;

	int main()
	{
		cout << "Welcome to the Rock, Paper, Scissors.\n ";
		
		int playerChoice;
		int again;
		int compChoice;
		srand(time(NULL));
		int countWins = 0;
		int countLoss = 0;
		int countTies = 0;
		
		do
		{
			cout << " \n1- Rock \n2- paper\n3- scissors. ";
			cin >> playerChoice;
			compChoice = rand() % 3 + 1;

			if (playerChoice == 1)
			{
				cout << "You have chose rock" << endl;
				if (playerChoice == 1 && compChoice == 3)
				{
					cout << "Rock beats scissors. You win" << endl;
					countWins++;
				}
				else if (playerChoice == 1 && compChoice == 2)
				{
					cout << "Paper beats rock. You lose" << endl;
					countLoss++;
				}
				else if (playerChoice == 1 && compChoice == 1)
				{
					cout << "Rock cannot beat rock. It's a tie" << endl;
					countTies++;
				}
			}
			else if (playerChoice == 2)
			{
				cout << "You have chose paper" << endl;
				if (playerChoice == 2 && compChoice == 3)
				{
					cout << "Paper cannot beat scissors. You lose" << endl;
					countLoss++;
				}
				else if (playerChoice == 2 && compChoice == 2)
				{
					cout << "Paper cannot beat paper. it's a tie" << endl;
					countTies++;
				}
				else if (playerChoice == 2 && compChoice == 1)
				{
					cout << "Paper can beat rock. You win" << endl;
					countWins++;
				}
			}
			else if (playerChoice == 3)
			{
				cout << "You have chose scissors" << endl;
				if (playerChoice == 3 && compChoice == 3)
				{
					cout << "Scissors cannot beat scissors. It's a tie" << endl;
					countTies++;
				}
				else if (playerChoice == 3 && compChoice == 2)
				{
					cout << "Scissors can beat paper. You win " << endl;
					countWins++;
				}
				else if (playerChoice == 3 && compChoice == 1)
				{
					cout << "Scissors cannot beat rock. You lose" << endl;
					countLoss++;
				}
			}
			cout << "Would you like to play again " << endl;
			cout << "n1- Yes\n2-No " << endl;
			cin >> again;
		} while (again == 1);
		cout << " Player Wins " << countWins << " computer loses " << countLoss << endl;
		cout << " Player loses " << countLoss << " computer wins " << countLoss << endl;
		cout << " Player ties " << countTies << " computer ties " << countTies << endl;
		system("pause");
		return 0;
	}