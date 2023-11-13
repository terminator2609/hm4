#include <iostream>
#include <iomanip>

using namespace std;

void formatingNumber(double x1, double x2, double x3, double x4, double y1, double y2, double y3, double y4)
{

	cout << "" << endl;
	cout << "Formating X1: " << setiosflags(ios::left) << setw(12) << setfill('#') << x1 << resetiosflags(ios::left) << endl;
	cout << "Formating Y1: " << setiosflags(ios::right) << setiosflags(ios::showpos) << setiosflags(ios::fixed) << setprecision(2) << y1
		<< resetiosflags(ios::right) <<  resetiosflags(ios::showpos) << endl;


	cout << "" << endl;
	cout << "Formating X2: " << setiosflags(ios::left) << setw(12) << setfill('#') << x2 << resetiosflags(ios::left) << endl;
	cout << "Formating Y2: " << setiosflags(ios::right) << setiosflags(ios::showpos) << setiosflags(ios::fixed) << setprecision(2) << y2 
		<< resetiosflags(ios::right) << resetiosflags(ios::showpos) << endl;

	cout << "" << endl;
	cout << "Formating X3: " << setiosflags(ios::left) << setw(12) << setfill('#') << x3 << resetiosflags(ios::left) << endl;
	cout << "Formating Y3: " << setiosflags(ios::right) << setiosflags(ios::showpos) << setiosflags(ios::fixed) << setprecision(2) << y3 
		<< resetiosflags(ios::right) << resetiosflags(ios::showpos) << endl;

	cout << "" << endl;
	cout << "Formating X4: " << setiosflags(ios::left) << setw(12) << setfill('#') << x4 << resetiosflags(ios::left) << endl;
	cout << "Formating Y4: " << setiosflags(ios::right) << setiosflags(ios::showpos) << setiosflags(ios::fixed) << setprecision(2) << y4 
		<< resetiosflags(ios::right) << resetiosflags(ios::showpos) << endl;
}


int main()
{
	double x1, x2, x3, x4;
	double y1, y2, y3, y4;


	cout << "Enter value of X1: ";
	cin >> x1;

	cout << "Enter value of Y1: ";
	cin >> y1;


	cout << "" << endl;
	cout << "Enter value of X2: ";
	cin >> x2;

	cout << "Enter value of Y2: ";
	cin >> y2;


	cout << "" << endl;
	cout << "Enter value of X3: ";
	cin >> x3;

	cout << "Enter value of Y3: ";
	cin >> y3;


	cout << "" << endl;
	cout << "Enter value of X4: ";
	cin >> x4;

	cout << "Enter value of Y4: ";
	cin >> y4;

	formatingNumber(x1, x2, x3, x4, y1, y2, y3, y4);

	return 0;
}

