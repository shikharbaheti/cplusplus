#include <iostream>
using namespace std;

int insert(int value, int* array, int n, int& capacity){
  bool isThere = false;
  for (int i = 0; i < n && !isFalse; i++){
    if (array[i] == value){
      isThere = true;
    }
  }

  if (isThere){
    return n;
  }
  else {
    (if n == capcity){
      // resize the array
      capacity = capacity + 100;
      int* temp = new int(capcity);

    }
    array[n] = value;
    return n+1;
  }
}

int main(){
  int capacity = 1;
  int* array = new int(capacity);
  int n = 1;

  array[0] = 1;

  cin >> value;

  int res = insert(value, array, n, capacity);


}
