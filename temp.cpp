#include <iostream>

using namespace std;

int main() {
  char choice;
  double celsius, fahrenheit;
  cout << "Do you want to convert from Celsius to Fahrenheit or from Fahrenheit to Celsius? [C/F]" << endl;
  cin >> choice;
  if (choice == 'C' || choice=='c') {
    cout << "Please enter the temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (9.0 / 5.0) * celsius + 32;
    cout << "The temperature in Fahrenheit is " << fahrenheit << " degrees.";
  }
  else if (choice == 'F'|| choice=='f') {
    cout << "Please enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (5.0 / 9.0) * (fahrenheit - 32);
    cout << "The temperature in Celsius is " << celsius << " degrees.";
  }
  else
    cout << "Invalid Choice";
}
