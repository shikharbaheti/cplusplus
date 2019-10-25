#include <iostream>
using namespace std;

int countEqual(int* numbers, int n, int x){
    int counter = 0;
    if (numbers[n] == x){
        return counter++;
    }
    else {
        n = n - 1;
        return countEqual(numbers, n, x);
    }
    // /n = n - 1;
    //return counter;
}

// int countEqual(int* numbers, int n, int x){
//     int counter = 0;
//     if (n = 0){
//         if (numbers[n] == x){
//             return 1;
//         }
//         else {
//             return 0;
//         }
//     }
//     if (countEqual(numbers, n - 1, x) == x){
//         counter ++;
//     }
//     return counter;
// }

int main(){
    int yeet[9] = {4, 5, 6, 7, 4, 4, 4, 2, 1,};
    int* pls = yeet;
    cout << countEqual(pls, 9, 4) << endl;
}

