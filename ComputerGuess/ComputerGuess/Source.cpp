	#include <iostream>
	#include <string>
	#include <stdio.h>      
	#include <stdlib.h>     
	#include <time.h>
	using namespace std;

	int main()
	{
		int compGuess;
		int secret;
		int count = 0;
		string result;
		srand(time(NULL));
	

		cout << " Welcome to the computer guess generator.\n ";
    
		cout << " This is where you get to pick a number from 1 to 100 and type it. ";
		cin >> secret;
		do 
		{
			compGuess = rand() % 100 + 0;
			if (compGuess < secret)
			{
				result = "The number is too low " + to_string(compGuess);
			}
			else if (compGuess > secret)
			{
				result = "the number is too high " + to_string(compGuess);
			}
			cout << result << endl;
			count++;
		} while (compGuess != secret);

		cout << "Number of guesses was " << count << endl;
		system("pause");
		return 0;
	}
		
	