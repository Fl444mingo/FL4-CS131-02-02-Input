#include <iostream>
// new #include statement for string support
#include <string>
using namespace std;
int main()
{
	int number1, number2;
	char letter1, letter2;
	string word1, word2;
	//simple one question, one answer, into one variable.
	cout << "Enter first number: ";
	cin >> number1;
	cout << "You entered " << number1 << ".\n";
	cout << "Enter two numbers separated by a space, then press return: ";
	// cin >> number1 >> number2;
	cin >> number1
		>> number2;
	cout << "You entered " << number1 << " and " << number2 << ".\n";
	cout << number1 << " + " << number2 << " = " << number1 + number2 << "\n";
	cout << "Enter two characters separated by a space, then press return: ";
	cin >> letter1
		>> letter2;
	cout << "You entered " << letter1 << " and " << letter2 << ".\n";
	// Doing math with characters uses their ascii ID's
	cout << "char + char: " << letter1 << " + " << letter2 << " = " << letter1 + letter2 << "\n";
	word1 = letter1 + letter2;
	cout << "string = char + char: " << letter1 << " + " << letter2 << " = " << word1 << "\n";
	word1 = "";
	word1 += letter1;
	word1 += letter2;
	cout << "string += char: " << letter1 << " + " << letter2 << " = " << word1 << "\n";
	cout << "Enter two words separated by a space, then press return: ";
	cin >> word1;
	cin >> word2;
	cout << "You entered " << word1 << " and " << word2 << ".\n";
	cout << word1 << " + " << word2 << " = " << word1 + word2 << "\n";
	system("pause");
	return 0;
}