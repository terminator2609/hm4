#include <iostream>
#include <iomanip>

using namespace std;

struct Laptops
{
	char brand[11];
	char model[11];
	char color[11];
	char yearOfMade[5];
	char fourNumberSerial[5];
	double diagonal;
	double price;

};

double plusMinusPrice(double price)
{
	double sum = 0;

	if (price > 0) {

		if (price >= 500 && price <= 700)
		{
			sum = 0.02;

		}
		else if (price >= 701 && price <= 900)
		{
			sum = 0.035;

		}
		else if (price >= 901 && price <= 1000)
		{
			sum = 0.05;

		}
		else if (price >= 1001)
		{
			sum = 0.062;

		}

	}
	else 
	{
		cout << "Check price pameter and try again [FORMAT: Price > 0]" << endl;
	}


	return sum;
}

int main()
{
	Laptops lp1, lp2, lp3, lp4, lp5;

	string serialNumber;

	cout << "Laptop 1 model: ";
	cin.getline(lp1.model, 11);

	cout << "Laptop 1 brand: ";
	cin.getline(lp1.brand, 11);

	cout << "Laptop 1 color: ";
	cin.getline(lp1.color, 11);

	cout << "Laptop 1 year of made: ";
	cin.getline(lp1.yearOfMade, 5);

	cout << "Laptop 1 last four numbers of serial number: ";
	cin.getline(lp1.fourNumberSerial, 5);

	cout << "Laptop 1 diagonal[INCH.]: ";
	cin >> lp1.diagonal;

	cout << "Laptop 1 price[lv.]: ";
	cin >> lp1.price;






	cout << "" << endl;
	cout << "Laptop 2 model: ";
	cin.getline(lp2.model, 11);

	cout << "Laptop 2 brand: ";
	cin.getline(lp2.brand, 11);

	cout << "Laptop 2 color: ";
	cin.getline(lp2.color, 11);

	cout << "Laptop 2 year of made: ";
	cin.getline(lp2.yearOfMade, 5);

	cout << "Laptop 2 last four numbers of serial number: ";
	cin.getline(lp2.fourNumberSerial, 5);

	cout << "Laptop 2 diagonal[INCH]: ";
	cin >> lp2.diagonal;

	cout << "Laptop 2 price[lv]: ";
	cin >> lp2.price;



	cout << "" << endl;
	cout << "Laptop 3 model: ";
	cin.getline(lp3.model, 11);

	cout << "Laptop 3 brand: ";
	cin.getline(lp3.brand, 11);

	cout << "Laptop 3 color: ";
	cin.getline(lp3.color, 11);

	cout << "Laptop 3 year of made: ";
	cin.getline(lp3.yearOfMade, 5);

	cout << "Laptop 3 last four numbers of serial number: ";
	cin.getline(lp3.fourNumberSerial, 5);

	cout << "Laptop 3 diagonal[INCH]: ";
	cin >> lp3.diagonal;

	cout << "Laptop 3 price[lv.]: ";
	cin >> lp3.price;




	cout << "" << endl;
	cout << "Laptop 4 model: ";
	cin.getline(lp4.model, 11);

	cout << "Laptop 4 brand: ";
	cin.getline(lp4.brand, 11);

	cout << "Laptop 4 color: ";
	cin.getline(lp4.color, 11);

	cout << "Laptop 4 year of made: ";
	cin.getline(lp4.yearOfMade, 5);

	cout << "Laptop 4 last four numbers of serial number: ";
	cin.getline(lp4.fourNumberSerial, 5);

	cout << "Laptop 4 diagonal[INCH]: ";
	cin >> lp4.diagonal;

	cout << "Laptop 4 price[lv. ]: ";
	cin >> lp4.price;



	cout << "" << endl;
	cout << "Laptop 5 model: ";
	cin.getline(lp5.model, 11);

	cout << "Laptop 5 brand: ";
	cin.getline(lp5.brand, 11);

	cout << "Laptop 5 color: ";
	cin.getline(lp5.color, 11);

	cout << "Laptop 5 year of made: ";
	cin.getline(lp5.yearOfMade, 5);

	cout << "Laptop 5 last four numbers of serial number: ";
	cin.getline(lp5.fourNumberSerial, 5);

	cout << "Laptop 5 diagonal[INCH]: ";
	cin >> lp5.diagonal;

	cout << "Laptop 5 price[lv. ]: ";
	cin >> lp5.price;


}

