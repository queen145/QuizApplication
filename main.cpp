# include <iostream>
#include <string>
using namespace std;
# include <string>
# include <ctime>

int squareOfNumb(int param) {
	return param * param;
}


bool isPrime(int numb) {
	if (numb <= 1)
		return false;
	for (int i = 2; i*i <= numb; i++) {
		if (numb % i == 0)
			return false;
	}
	return true;
}

bool palindrome(string myletters) {
	string x;
	for (int i = myletters.length()-1; i >= 0; i--) {
		x += myletters[i];
	}
	//cout << x << " " << myletters << endl;
	if (x == myletters) {
		return true;
	}
	else {
		return false;
	}
}

void range(int first, int second) {
	for(int i = first; i <= second; i++) {
		cout << i << " " << endl;
	}
}

string madLib(string nounOne, string verbOne, string adverbOne) {
	string myFunny;
	myFunny = nounOne + " " + verbOne + " " + adverbOne;
	return myFunny;
}


int menu(string name) { // according to instruction I create int menu function to separate the choices with the questions

	int choice;
	cout<< "What would you like to do: \n\n";   // prompts Questtions
	cout<< "1. Check for Palindrome? " << endl;
	cout<< "2. is your number a prime number? " << endl;
	cout<< "3. get the square of a number? " << endl;
	cout<< "4. print numbers in a range? " << endl;
	cout<< "5. get a funny sentence, mad lib style. " << endl;
	cout<< "6. quit \n\n";
	cout<< "Make a choice " << name << ":\n";
	cin >> choice;
	cin.ignore();  // claer newline

	return choice;

}



int main() {

	string name;
	cout<< "Welcome to the Simple Application! " << endl;
	cout << "Please enter your name: ";   // ask user for name
	getline(cin, name);

	int choice;
	while (true) {
		choice = menu(name);


		if (choice == 1) {  // case 1 for palindrome
			string letters;
			cout << "Enter a word to check for palindrome: \n";
			getline(cin, letters);


			if(palindrome(letters)) {
				cout << letters << " is the palindrome" << endl;
			}
			else {
				cout << letters << " is not a palindrome" << endl ;
			}
		}
		else if(choice == 2) {  // case 2  for prime num
			int numb;  // declare the variable inside the loop for this to work
			cout << "Enter a number to check if it is prime. \n";
			cin >> numb;


			if(isPrime(numb)) {   // added this from the function in the void for calculations and print result
				cout << numb << " is the prime number." << endl;
			} else {
				cout << numb << " is not the prime number." << endl;

			}

		}
		else if (choice == 3) {  // case 3  square of a number
			int numb;
			cout << "Enter a number of  square: \n";
			cin >> numb;


			cout << "The square of " << numb << " is " << squareOfNumb(numb) << "." <<endl;
		}
		else if (choice == 4) {   // case 4   Ranges
			int first, second;
			cout<< "Enter first and second number of the range: \n"<< endl; // this ask the user input
			cin >> first;
			cin >> second;

			cout << "Numbers in the range: ";    // this print ranges
			for(int i = first; i <= second; i++) {
				cout << i << " ";
			}
			cout << endl;

		}
		else if(choice == 5) {  // case 5   madlib
			string noun, verb, adverb;
			cout << "Enter a noun: \n";  // user input
			getline(cin, noun);
			cin.ignore();
			cout << "Enter a verb: \n"; // user input
			getline(cin, verb);
			cin.ignore();
			cout << "Enter an adverb: \n"; // user input
			getline(cin, adverb);

			cout << "Here is your madlib:  ";  // here I am having difficulty getting this line out in a new line
			cout << "I love my " << noun << " , a " << adverb << " tow truck, that is " << verb << " across the floor. " << endl;

		}
		else if(choice == 6) { // case 6
			cout << "Thank you good bye! " << endl;
            break;
		}

		else {
			cout << choice << " is not a choice \n";  // if user put the choices that are not include it will output invalid choice
		}

         



	}





	return 0;








}




