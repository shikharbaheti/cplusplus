#include <iostream>

using namespace std;

int main(){

  float series;
  int nums;
  float placeHolder;
  int lenght = 1;
  int lastOne;

  cin >> nums;
  cin >> series;

  placeHolder = series;

  if (nums == 1){
    cout << lenght;
  } // if ending
  else {

  for (int i = 1; i < nums; i++) {
    cin >> series;
    while (series > placeHolder)
    {
      lenght = lenght + 1;
      placeHolder = series;
    }
  }
} // else
cout << lenght;
} // main ending
