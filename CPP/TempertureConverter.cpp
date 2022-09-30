#include<iostream>
using namespace std;

int main()
{
   float fahr, cel;
   char c;

   cout << "Choose from following option:" << endl;
   cout << "1. Celsius to Fahrenheit." << endl;
   cout << "2. Fahrenheit to Celsius." << endl;
   cin >> c;

   if (c == '1')
   {
      cout << "Enter the temperature in Celsius: ";
      cin >> cel;

      fahr = (1.8 * cel) + 32.0;
      cout << "\nTemperature in degree Fahrenheit: " << fahr << " F" << endl;
   } 
   else if (c == '2') 
   {
      cout << "Enter the temperature in Fahrenheit: ";
      cin >> fahr;

      cel = (fahr - 32) / 1.8;
      cout << "\nTemperature in degree Celsius: " << cel << " C" << endl;
   }
   else
      cout << "Error Wrong Input." << endl;

   return 0;
}
