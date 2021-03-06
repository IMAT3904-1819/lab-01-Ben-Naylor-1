// Lab01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;


int main()
{
	srand(time(NULL));
	int number = rand() % 100;
	int attempts = 5;
	bool canPlay = true;
	bool bwin = false;
	cout << "guess a number between 1 and 100.\n";
	cout << "DEBUG: Number is: " << number << "\n";

	int playerguess = 0;
	while (canPlay) {
		cin.clear();
		cout << "remining attempts: " << attempts << "\n";
		cout << "Enter a number: ";
		cin >> playerguess;

		if (playerguess == number) {
			cout << "You guess the number!\n";
			canPlay = false;
			bwin = true;
		}
		else {
			attempts -= 1;
			cout << "You have " << attempts << " attempts remaining.\n\n";
			if (playerguess < number) {
				cout << "Try higher.\n";
			}
			else if (playerguess > number) {
				cout << "Try lower.\n";
			}
			else {
				cout << "something broke";
			}

			if (attempts < 1) {
				cout << "you ran out of attempts.\n";
				cout << "The number was: " << number << "\n";
				canPlay = false;
			}
		}

		
	}

	if (bwin) {
		cout << "You Win!\n";
	}
	

	system("pause");
    return 0;
}

