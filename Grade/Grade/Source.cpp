#include <string>
#include <iostream>

using namespace std;

int main()
{
	char grade = '  ';
	string result;

	cout << "Enter your letter grade so we can judge you";
	cin >> grade;

	grade = toupper(grade);

	switch (grade)
	{
	case 'a':
		result = "Good and now become a lawyer";
		break;
	
	case 'b':
		result = "You have failed your family";
		break;

	case 'c':
		result = "Your family have disowned you";
		break;

	case 'd':
		result = "You are out of here ";
		break;

	case 'f':
		result = "Your family have forgotten about you";
		break;
	default:
		result = "Not availble";
		cin >> result;
	}
	system("pause");
	return 0;
}

