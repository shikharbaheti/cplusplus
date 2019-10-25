#include <iostream>
using namespace std;


int main(){
    int const no_rows = 2;
    int const no_cols = 4;
    int arr[no_rows][no_cols];
    for (int i = 0; i < no_rows; i++){  // rows
        for (int j = 0; j < no_cols; j++){
            arr[i][j] = i * no_cols + j;
            // j = j + 1;
            // if (j == no_cols){
            //     i = i + 1;
            // }
            // if (j % no_cols == 0){
            //     j = 0;
            // }
        }
    }

    for (int i = 0; i < no_rows; i++){  // rows
        for (int j = 0; j < no_cols; j++){
            cout << arr[i][j] << " at " << i << " " << j << endl;
        }
    }
}