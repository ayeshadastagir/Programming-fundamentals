#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	string y;
	do{

	srand(time(0));
	int computer = rand() % 3 + 1;
	
	int user;
	
	cout << "====================\n";
	cout << "rock paper scissor!\n";
	cout << "====================\n";
	
	cout << "1) rock\n";
	cout << "2) paper\n";
	cout << "3) scissor\n";
	do{
	
	cout << "Choose number 1,2 or 3\n";
	cout << "shoot! \n";
	cin >> user;
    }while(user<1 || user >3);
	
	
	
	if (user == 1 && computer == 1)
	{
		cout<< "Both choose rock so ";
		cout << "It's a tie!\n";
	}
	else if (user == 1 && computer == 2)
	{
		cout<< "Computer choose paper so";
		cout << "Computer wins!\n";
	}
	else if (user == 1 && computer == 3)
	{
		cout << "computer choose scissors so ";
		cout << "User wins!\n";
	}
	else if (user == 2 && computer == 1)
	{
		cout << "computer choose rock so ";
		cout << "User wins!\n";
	}
	else if (user == 2 && computer == 2)
	{
		cout << "computer choose paper so ";
		cout << "It's a tie!\n";
	}
	else if (user == 2 && computer == 3)
	{
		cout << "computer choose scissors so ";
		cout << "Computer wins!\n";
	}
	else if (user == 3 && computer == 1)
	{
		cout << "computer choose rock so ";
		cout << "Computer wins!\n";
	}
	else if (user == 3 && computer == 2)
	{
		cout << "computer choose paper so ";
		cout << "User wins!\n";
	}
	else if (user == 3 && computer == 3)
	{
		cout << "computer choose scissors so ";
		cout << "It's a tie!\n";
	}
	cout << "If you want to play again press y\n";
	
	cin >> y;
}
	while(y=="y" || y=="Y");
	
	return 0;
}
