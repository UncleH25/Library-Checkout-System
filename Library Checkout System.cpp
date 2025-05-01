#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	//Constants
	const double NORMAL_RATE = 1.0;
	const double TEXTBOOK_RATE = 2.0;

	//Variables
	string userName, bookTitle;
	int daysDue;
	char isTextbook;

	//Input
	cout << "Enter your name: \n";
	getline(cin, userName);

	cout << "Enter the title of the book: \n";
	getline(cin, bookTitle);

	cout << "How many days is the book due in? \n";
	cin >> daysDue;

	// Clear the newline character from the input buffer
	cin.ignore();

	cout << "Is the book a textbook? (Y/N): \n";
	cin >> isTextbook;

	return 0;
}
