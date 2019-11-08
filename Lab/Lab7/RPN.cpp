#include <iostream>  
#include "Stack.h"
#include <cmath>
using namespace std;

 
int main(){
    int const maxSize = 3;
    char value[maxSize];
    double digit, check;
    Stack s;
    double left, right, temp;
    while (value[0] != '=') {
            cin >> value[0];
            digit = atof(&value[0]);
            check = digit / 1;
            if (value [0] == '+' || value [0] == '-' || value [0] == '*' || value [0] == '/') {
                right = pop(s);
                left = pop(s);
                switch (value[0])
            {
                case '+': 
                    temp = left + right;
                    push(s, temp);
                    break;
                case '-': //  
                    temp = left - right;
                    push(s, temp);
                    break;
                case '*': 
                    temp = left * right;
                    push(s, temp);
                    break;
                case '/': 
                    temp = left / right;
                    push(s, temp);
                    break;
                default:
                    cout << "[ERROR] invalid operator: " << value[0]; // code to be executed if n doesn't match any cases
                break;
            }
        }
        else if (value [0] != '+' && value [0] != '-' && value [0] != '*' && value [0] != '/' && value [0] != '=' && check == digit) {
                digit = atof(&value[0]);
                push(s, digit);
            }
        // else {
        //     cout << "[ERROR] invalid operator: " << value[0];
        // }

    }
        // cout << "HOLD ON" << endl;
    
    // for (int i = 0; i < s.length; i++){
    //     cout << s.A[i];
    // }
    
}