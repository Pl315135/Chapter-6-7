#include <iostream>
#include <string>
using namespace std;

int main()
{
	for (int i = 0; i <= 10; i = i + 1)
	{
		
		cout << i << endl;
	}
	for (int X = 10; X >= 0; X--)
	{
		cout << X << endl;
		if (X == 0)
		{
			cout << "Lift off!" << endl;
		}
	}
	for (int a = 0; a <= 100; a = a + 5)
	{
		cout << a << endl;
		if (a == 50)
		{
			cout << "Yay" << endl;
		}
	}
	for (int a = 0; a <= 100; a = a + 3)
	{
		cout << a << endl;
		if (a == 48)
		{
			cout << "50 Boom shaka lacka" << endl;
		}
	}
	
		for (int b = 1; b <= 1; b = b - 1)
	{
		cout << b << endl;
		if (b <= 12)
		{
			cout << b << endl;
		}
	}
	system("pause");
	return 0;
}