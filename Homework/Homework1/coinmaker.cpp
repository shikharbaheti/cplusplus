#include <iostream>

using namespace std;

int main(){

  int dollars;
  int cents;
  int pennyVal = 1;
  int nickelVal = 5;
  int dimeVal = 10;
  int quaterVal = 25;
  int remainder = 0;
  long dollarToCents;
  int penniesToOutput = 0;
	int nickelsToOutput = 0;
	int dimesToOutput = 0;
  int quartersToOutput = 0;
  int totalCoinsUsed = 0;

  cout << "Enter dollars: ";
  cin >> dollars;
  cout << "Enter cents: ";
  cin >> cents;


  //if ((dollars >= 0) && (cents >=0){

  //}

  if (dollars >= 0){
    dollarToCents = dollars * 100;
    quartersToOutput = (dollarToCents / quaterVal);
    totalCoinsUsed = (dollarToCents / quaterVal);
  }

if (cents >= 0){
  quartersToOutput = quartersToOutput + (cents / quaterVal);
  totalCoinsUsed = totalCoinsUsed + (cents / quaterVal);
  remainder = (cents % quaterVal);
}

if (remainder >= dimeVal) {
  dimesToOutput = (remainder / dimeVal);
  totalCoinsUsed = totalCoinsUsed + (remainder / dimeVal);
  remainder = (remainder % dimeVal);
}

if (remainder >= nickelVal) {
  nickelsToOutput = (remainder / nickelVal);
  totalCoinsUsed = totalCoinsUsed + (remainder / nickelVal);
  remainder = (remainder % nickelVal);
}

penniesToOutput = remainder;
totalCoinsUsed = totalCoinsUsed + penniesToOutput;

  cout << "Pennies: " << penniesToOutput << endl;
  cout << "Nickels: " << nickelsToOutput << endl;
  cout << "Dimes: " << dimesToOutput << endl;
  cout << "Quarters: " << quartersToOutput << endl;
  cout << endl;
  cout << "Total coins used: " << totalCoinsUsed << endl;



  return 0;
}
