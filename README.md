# 📚 Library Book Checkout System

A C++ console program that calculates and displays a checkout fee summary based on how long a book is borrowed and whether it is a textbook or not. The program collects user details and book information, then outputs a neatly formatted receipt.

## 📄 Description

This program prompts the user for their name, the book title, the number of days the book is due in, and whether the book is a textbook. It then calculates two possible fees: one for a normal book and one for a textbook—both based on fixed daily rates.

**⚠️ Note: The program calculates both fees regardless of the actual book type. The user must refer to the correct one based on the Y/N input.**

## Example Output
```
Enter your name:
John Smith
Enter the title of the book:
C++ Programming Basics
How many days is the book due in?
5
Is the book a textbook? (Y/N):
Y

--- Checkout Summary ---
Name: John Smith
Book Title: C++ Programming Basics
Days Due: 5
Is Textbook: Y

--- Checkout Fee Summary ---
Normal Book Fee: R5.00
Textbook Fee: R11.00

------------------------
Thank you for using the Library Book Checkout System!
Please return the book on time to avoid late fees.
Have a great day!
------------------------

```

## 🛠️ Technologies Used
* Language: C++
* IDE Used: Visual Studio (But any IDE will work)

## 📦 How to Run
1. Clone The Repo Using CMD:
```
git clone https://github.com/UncleH25/Library-Checkout-System.git
cd library-checkout-system
```

3. From a terminal (in the extracted folder), run:
```
g++ -o library_checkout_system main.cpp
./library_checkout_system
```

4. Or, if you're using an IDE like Code::Blocks or Visual Studio, open the file and press **Run** or **Build and Run**.
  
## 📜 License
This project is open source and free to use under the **MIT License**.
