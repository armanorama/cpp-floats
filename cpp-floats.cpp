#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  // Using floats
  float fValue = 123.456789; // Decimal values must be declared with floats or doubles

  cout << "---- Floats ----" << endl;
  cout << "Float value: " << fValue << endl;
  cout << "Scientific float value: " << scientific << fValue << endl;
  cout << "Fixed float value: " << fixed << fValue << endl;
  cout << "Size of float value: " << sizeof(float) << endl;


  // Using doubles
  double dValue = 123.456789;

  cout << "---- Doubles ----" << endl;
  cout << "Double value: " << dValue << endl;
  cout << "Scientific double value: " << scientific << dValue << endl;
  cout << "Fixed double value: " << fixed << dValue << endl;
  cout << "Size of double value: " << sizeof(double) << endl;




  return 0;
}
