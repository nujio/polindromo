#include <iostream>
using namespace std;

int main()
{
     int originalNumber, number, digit, reverseNumber = 0;

     cout << "Enter a positive number: ";
     cin >> originalNumber;

     number = originalNumber;

     do
     {
         digit = number % 10;
         reverseNumber = (reverseNumber * 10) + digit;
         number = number / 10;
     } while (number != 0);

     cout << " The reverse of the number is: " << reverseNumber << endl;

     if (originalNumber == reverseNumber and number > 0)  // Negative numbers are not palindromic
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}
