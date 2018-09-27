#include <iostream>
#include <string>
using namespace std;

int main()
{
	int americanDollar;
	double peso;
	double yen;
	double pounds;

	cout << "Please enter the US dollars :";
	cin >> americanDollar;

	peso = americanDollar * 12.8863;
	yen = americanDollar * 82.34;
	pounds = americanDollar * .6318;

	cout << "American dollars to pesos is " << peso << endl;
	cout << "American dollars to yen is " << yen << endl;
	cout << "American dollars to pounds is " << pounds << endl;

	system("pause");
	return 0;