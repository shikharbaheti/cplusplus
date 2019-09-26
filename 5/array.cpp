#include <iostream>
using namespace std;

double product(double* u, double* v, int n){
  double sum = 0.0;
  for (int i = 0; i < n; i ++){
    sum = sum + u[i]*v[i];
  }
  return sum;
}

int main(){
  cout int MAX = 100;
  int m;
  double A[MAX][MAX];

  cout << "Enter m: ";
  cin >> m;


  for (int i = 0; i < m; i++){
    cout << "Enter the row:" << i << ": ";
    for (int j = 0; j < m; j++){
      cout << "Enter the column: " << j << ": ";
      cin >> A[i][j];
    }
  }
}

// Calculate A^2 now

for (int i = 0; i < m; i++){
  // copy row i of the matrix to array row
  for (int k = 0; k < m; k++){
    row[k] = A[i][k];
  }
  for (int j = 0; j < m; j++){
    for (int k = 0; k < m; k++){
      col[k] = A[k][j];
      A2[i][j] = product(row, col, m);
    }
  }
}

// FINISH THIS
