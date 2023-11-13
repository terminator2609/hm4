#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int genNumber(int currentNum) {

	int number;

	do
	{
		srand(time(NULL));
		number = rand() % 50 + 1;

	} while (currentNum == number);


	return number;
}

int main()
{
	int newNum;
	int level = 1;
	int point = 0;
	int currentNum = 0;
	char choose;

	currentNum = genNumber(currentNum);

	cout << "The current number is: " << currentNum << endl;


	while (level < 11) {

		cout << "" << endl;
		cout << "Choose < or >[1 - < , 2 - >]: ";
		cin >> choose;

		if (choose == '1' || choose == '2') {

			newNum = genNumber(currentNum);


			if (currentNum > newNum && choose != '1' || currentNum < newNum && choose != '2') {

				cout << "" << endl;
				cout << "Game Over !!! Good luck next time !!!" << endl;
				cout << "The last number is: " << newNum;
				cout << "" << endl;

				cout << "Play again [y-Yes]: ";
				cin >> choose;

				
				if (choose == 'y' || choose == 'Y') {
					level = 1;
					point = 0;

					currentNum = genNumber(newNum);

					system("CLS");

					cout << "Startin new game........" << endl;
					cout << "The current number is: " << currentNum << endl;
					
					continue;
				}
				else {
					exit(0);
				}

			}


			currentNum = newNum;

			if (level < 10) {

				cout << "" << endl;
				cout << "Time is new choose!!! Good luck !!!" << endl;
				cout << "The number is: " << currentNum << endl;
			}

			point += level;
			level++;
		}
		else {
			continue;
		}


	}


	if (level == 11) {

		system("CLS");

		cout << "" << endl;
		cout << "The last number: " << currentNum << endl;
		cout << "You win !!!" << endl;
		cout << "Your points are: " << point << endl;
		cout << "Your level is: " << level - 1 << endl;
	}

	return 0;
}

