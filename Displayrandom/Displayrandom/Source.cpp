#include <iostream>
#include <string>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>
using namespace std;

int main()
{
	int numG;
	
	srand(time(NULL));
	
	
	cout << " Welcome to the number generator.\n ";
	
	for (int i = 0; i <= 10; i++)
	{
		numG = rand() % 10 + 1;
		cout << numG << endl;
	}
	
	system("pause");
	return 0;

}
