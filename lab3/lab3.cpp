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

			/* zad 3 
			
			
			
			
			
			
			
			
			
			*/

	/* zad 4 */
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
	}
	
	


}

