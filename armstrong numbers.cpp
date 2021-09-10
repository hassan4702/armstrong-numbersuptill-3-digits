#include<iostream>
using namespace std;
int main()
{
	int clone = 0, user_input, f, sum = 0;
	cout << "ENTER A NUMBER WITH 3 DIGITS  \n";
	cin >> user_input;
	clone = user_input;
	for (int r = 0; r < 3; r++)
	{
		f = user_input % 10;
		sum = sum + f * f * f;
		user_input = user_input / 10;

	}

	if (sum == clone)
	{
		cout << "The number you entered is an ARMSTRONG NUMBER!!";
	}
	else
	{
		cout << "The number you entered is 'NOT' an Armstrong number";
	}
}