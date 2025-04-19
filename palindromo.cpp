#include <iostream>
using namespace std;

int main()
{
     int originalNumber, number, digit, reverseNumber = 0;

     cout << "Enter a positive number: ";
     cin >> originalNumber;

     //I use a work var to manipulate
     number = originalNumber;

     do
     {
          //read the last digit
         digit = number % 10;

          //add it to the reverse number, shifting other digits to the left
         reverseNumber = (reverseNumber * 10) + digit;

          //removing the last digit from the original Number
         number = number / 10;
     } while (number != 0);

     cout << " The reverse of the number is: " << reverseNumber << endl;

     if (originalNumber == reverseNumber and number > 0)  // Negative numbers are not palindromic
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}
