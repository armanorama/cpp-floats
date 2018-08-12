#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  float fValue = 76.4; // Decimals must be declared with floats

  cout << "Float value: " << fValue << endl;
  cout << "Scientific float value: " << scientific << fValue << endl;
  cout << "Fixed float value: " << fixed << fValue << endl;
  return 0;
}
