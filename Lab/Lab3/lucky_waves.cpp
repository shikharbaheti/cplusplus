#include <iostream>

using namespace std;

int main(){

  float series;
  int nums;
  float placeHolder;
  int length = 1;
  int lastOne;
  int lenghtComp = 1;
  int wave = 1;

  cin >> nums;
  cin >> series;

  placeHolder = series;

  if (nums == 1){
    cout << length;
  } // if ending


  else {
  for (int i = 1; i < nums; i++) {
    cin >> series;
      if (series > placeHolder){
        length++;
        placeHolder = series;
        if (length > wave){
          wave = length;
        }
      }
    else {
      placeHolder = series;
      if (length > wave){
        wave = length;
    }
    }
  }
  cout << wave;
}
}
