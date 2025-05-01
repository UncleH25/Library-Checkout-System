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

	//Calculate fee based on type of book
	double finalFeeTextbook = (isTextbook == 'Y' || isTextbook == 'y') + (TEXTBOOK_RATE * daysDue);
	double finalFeeBook = (isTextbook == 'N' || isTextbook == 'n') + (NORMAL_RATE * daysDue);

	//Output
	cout << fixed << setprecision(2);
	cout << "\n--- Checkout Summary ---\n";
	cout << "Name: " << userName << endl;
	cout << "Book Title: " << bookTitle << endl;
	cout << "Days Due: " << daysDue << endl;
	cout << "Is Textbook: " << isTextbook << endl;
	cout << "\n--- Checkout Fee Summary ---\n";
	cout << "Normal Book Fee: R" << finalFeeBook << endl;
	cout << "Textbook Fee: R" << finalFeeTextbook << endl;
	cout << "\n------------------------\n";
	cout << "Thank you for using the Library Book Checkout System!\n";
	cout << "Please return the book on time to avoid late fees.\n";
	cout << "Have a great day!\n";
	cout << "\n------------------------\n";

	return 0;
}
