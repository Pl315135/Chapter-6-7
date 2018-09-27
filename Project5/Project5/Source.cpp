#include <string>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int pickBook = 0;
	int secretBook;
	int count = 0;
	int again;
	
	do {
		srand(time(NULL));
		secretBook = rand() % 57 + 1;

		cout << "welcome to the chamber of cat in the hat";
		cout << "Otherwise known as LIS" << endl;
		cout << "There is a cat in the hat, but only one. Try to catch it. \n If you do not find the cat./n You will fail.";
		cout << "Choose your book by number >>>";
		cin >> pickBook;

		while (pickBook != secretBook && count != 2)
		{
			if (pickBook > secretBook)
			{
				cout << "The number was too high";
			}
			else if (pickBook < secretBook)
			{
				cout << "The number was too low";
			}
			else if (pickBook == secretBook)
			{
				cout << "That's the book";
			}
			count = count + 1;
			//count++;
		}
		if (count == 2)
		{
			cout << " somebody is coming for you";
		}
		else
		{
			cout << "Hey Nice book";
		}

		cout << "would you like to play this game again ? 1 for yes 2 for no" << endl;
		cin >> again;
		
		pickBook = 0;
		count = 0;
	} while (again != 2);

	system("pause");
	 return 0;
}
 