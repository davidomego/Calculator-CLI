#include <iostream>

using namespace std;

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);
int modulo(int x, int y);
void displayOption();


int main()
{
	system("color a");

	cout << "Welcome to David Calculator" << endl;
	displayOption();

	string cmd;

	while (true) {
		cout << "Enter a command>> ";
		cin >> cmd;

		if (cmd == "quit" || cmd == "q") {
			cout << "Exiting" << endl;
			break;
		}
		else if (cmd == "menu") {
			displayOption();
		}
		else if (cmd == "add") {
			cout << "-----------------" << endl;
			cout << "Enter two numbers" << endl;
			cout << "-----------------" << endl;
			int fnum, snum;
			cout << "First Number>> ";
			cin >> fnum;
			cout << "Second Number>> ";
			cin >> snum;
			cout << "Result: " << add(fnum, snum) << endl;
		}
		else if (cmd == "subtract") {
			cout << "-----------------" << endl;
			cout << "Enter two numbers" << endl;
			cout << "-----------------" << endl;
			int fnum, snum;
			cout << "First Number>> ";
			cin >> fnum;
			cout << "Second Number>> ";
			cin >> snum;
			cout << "Result: " << subtract(fnum, snum) << endl;
		}
		else if (cmd == "multiply") {
			cout << "-----------------" << endl;
			cout << "Enter two numbers" << endl;
			cout << "-----------------" << endl;
			int fnum, snum;
			cout << "First Number>> ";
			cin >> fnum;
			cout << "Second Number>> ";
			cin >> snum;
			cout << "Result: " << multiply(fnum, snum) << endl;
		}
		else if (cmd == "divide") {
			cout << "-----------------" << endl;
			cout << "Enter two numbers" << endl;
			cout << "-----------------" << endl;
			int fnum, snum;
			cout << "First Number>> ";
			cin >> fnum;
			cout << "Second Number>> ";
			cin >> snum;
			if (snum == 0) {
				cout << "ERROR: ZERO_DIVISION_ERR" << endl;
			}
			else {
				cout << "Result: " << divide(fnum, snum) << endl;
			}
		}
		else if (cmd == "modulo") {
			cout << "-----------------" << endl;
			cout << "Enter two numbers" << endl;
			cout << "-----------------" << endl;
			int fnum, snum;
			cout << "First Number>> ";
			cin >> fnum;
			cout << "Second Number>> ";
			cin >> snum;
			cout << "Result: " << modulo(fnum, snum) << endl;
		}
		else {
			cout << "ERROR: INVALID COMMAND" << endl;
		}

	}

	cout << "Thank you for using my calculator." << endl;

	system("PAUSE");

	return 0;
}

int add(int x, int y) {
	return x + y;
}

int subtract(int x, int y) {
	return x - y;
}

int multiply(int x, int y) {
	return x * y;
}

int divide(int x, int y) {
	return x / y;
}

int modulo(int x, int y) {
	return x % y;
}

void displayOption() {
	//prints menu
	cout << "---------------------------------------------------" << endl;
	cout << "Enter \'add\' to add two numbers" << endl;
	cout << "Enter \'subtract\' to subtract two numbers" << endl;
	cout << "Enter \'multiply\' to multiply two numbers" << endl;
	cout << "Enter \'divide\' to divide two numbers" << endl;
	cout << "Enter \'modulo\' to find the modulo of two numbers" << endl;
	cout << "Enter \'quit\' to exit from this application" << endl;
	cout << "---------------------------------------------------" << endl;
}

