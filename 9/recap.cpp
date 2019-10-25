int f_n_by_value(int n){
  n = n + 1;
  return n;
}

int f_n_by_reference(int &n){
  n = n + 1;
  return n;
}

int main(){
  int n = 10;
  int a = f_n_by_value(n);
  cout << "by f_n_by_value" << a;
  int b = f_n_by_reference(n);
  cout << "by f_n_by_reference" << b;
}

int * a = new int[100];
int ** b; // every element is a pointer

b[1]  = array where element is a pointer 
