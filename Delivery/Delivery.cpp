#include <iostream>
#include <iomanip>

using namespace std;

void calculateDelivery(double weight, unsigned short typeOfDelivery, unsigned short placeOfDelivery)
{
	double sumOfDelivery = 0;

	if (typeOfDelivery >= 1 && typeOfDelivery <= 2 && placeOfDelivery >= 1 && placeOfDelivery <= 2 && weight > 0)
	{
		sumOfDelivery += weight <= 5 ? 3 : 3 + ((weight - 5) * 1.20);
		sumOfDelivery += typeOfDelivery == 1 ? 0 : 5;
		sumOfDelivery += placeOfDelivery == 1 ? 0 : 3;

		cout << "" << endl;
		cout << "The price of delivery is: " << setiosflags(ios:: fixed) << setprecision(2) << sumOfDelivery << " lv." << endl;
	}
	else {
		cout << "" << endl;
		cout << "Check params and try again !!!" << endl;
	}
}

int main()
{
	double weight;
	unsigned short typeOfDelivery, placeOfDelivery;

	cout << "Enter value of weight[kg]: ";
	cin >> weight;

	cout << "Enter NUMBER value of type of delivery[1 - STANDARD or 2 - EXPRESS]: ";
	cin >> typeOfDelivery;

	cout << "Enter NUMBER value of place of delivery[1 - OFFICE or 2 - ADDRESS]: ";
	cin >> placeOfDelivery;

	calculateDelivery(weight, typeOfDelivery, placeOfDelivery);

	return 0;
}


