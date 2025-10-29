// lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	/* zad 1
		int a, b;
		cout << "Enter two integers: ";
		cin >> a;
		cin >> b;
		if (a==b) {
			cout << "The numbers are equal." << endl;
		}
		else if (a<b) {
			cout << "The first number is less than the second." << endl;
		}
		else {
			cout << "The first number is greater than the second." << endl;
		} */

		/* zad 2
			int a, b;
			cout << "Enter two integers: ";
			cin >> a;
			cin >> b;
			if (a != b) {
				cout << "The numbers are not equal." << endl;
				if (a < b) {
					cout << "The first number is less than the second." << endl;
				}
				else {
					cout << "The first number is greater than the second." << endl;
				}
			}
			else {
				cout << "The numbers are equal";
			} */
			
/* zad 3 - korelacje */
	double r;
	cout << "Enter r: ";
	cin >> r;

	if r

	if (r > 0.7 && r <= 1) {
		cout << "Very strong positive correlation" << endl;
	}
	else if (r >= 0.5) {
		cout << "Strong positive correlation";
	}
	else if (r>=0.3) {
		cout << "Moderate positive correlation";
	}
	else if (r >= 0.1) {
		cout << "Weak positive correlation";
	}
	else if (r == 0) {
		cout << "No correlation";
	}

			
			
			
			
			
			
			
			
			
			

	/* zad 4 
	float a, b;
	char operation;

	cout << "Enter two numbers: ";
	cin >> a;
	cin >> b;
	cout << "Enter the operation (+, -, *, /): ";
	cin >> operation;
	switch (operation) {
	case '+':
		cout << "Result: " << a + b << endl;
		break;
	case '-':
		cout << "Result: " << a - b << endl;
		break;
	case '*':
		cout << "Result: " << a * b << endl;
		break;
	case '/':
		if (b != 0) {
			cout << "Result: " << a / b << endl;
		}
		else {
			cout << "Error: Division by zero!" << endl;
		}
		break;
	default:
		cout << "Invalid operation" << endl;
	} */
	
	/* zad 5 
	while (1) {
		cout << 1;
	}
	return 0;
	*/

	/* zad 6 

	float a, b;
	char operation;
	bool fini; //finish? T=yes, F=no

	while (1) {
		cout << "Enter two numbers: ";
		cin >> a;
		cin >> b;
		cout << "Enter the operation (+, -, *, /): ";
		cin >> operation;
		switch (operation) {
		case '+':
			cout << "Result: " << a + b << endl;
			break;
		case '-':
			cout << "Result: " << a - b << endl;
			break;
		case '*':
			cout << "Result: " << a * b << endl;
			break;
		case '/':
			if (b != 0) {
				cout << "Result: " << a / b << endl;
			}
			else {
				cout << "Error: division by zero." << endl;
			}
			break;
		default:
			cout << "Invalid operation" << endl;
		}
		cout << "Finish? (Enter 1 to finish or 0 to continue) ";
		cin >> fini;
		if (fini == true)
			return 0;
		else if (fini == false)
			continue;

	} */






}

