#include <iostream>
#include <cmath>
using namespace std;

int const len = 9;
//double array1[len] = {-4, 8, 0};
//double array2[len] = {2, 1, 0};
// const double x[len] = {0, 0, 0};
// double y[len] = {3, 2, 1};
// const double a = 0;
const double x[len] = {-1, -2, -3, -5, -6, -2, 3, 2, 1};
double dest[len] = {0, 0, 0, 0, 0, 7, 3, 2, 1};



int amax(const double* x, const unsigned int len) {
    if (len != 0) {
            int maxOftheMax = 0;
            int indexThough = 0;
        for (unsigned int j = 0; j < len; j++){
                if (fabs(x[j]) > maxOftheMax){
                maxOftheMax = fabs(x[j]);
                indexThough = j;
                }
            }
        return indexThough;
    }
    return 0;
}




int main(){

    cout << amax(x, len);

//    for (unsigned int k; k < len; k++){
//         cout << y[k] << ", ";
//     }

    // cout << "Array 1: " << endl;
    // for (int i = 0; i < len; i++){
    //     cout << array1[i];
    // }
    // cout << endl;

    // cout << "Array 2: " << endl;
    // for (int i = 0; i < len; i++){
    //     cout << array2[i];
    // }
    // cout << endl;
}