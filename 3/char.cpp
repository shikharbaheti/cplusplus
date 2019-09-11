#include <iostream>

using namespace std;

bool is_letter(char c){
  if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
    return true;
  }
  else {
    return false;
  }
}

int main (){
  char k;

  cout << "Enter a char, fam: " << endl;
  cin >> k;

is_letter(k);

}
