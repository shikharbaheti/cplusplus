#include <iostream>  
#include "Stack.h"
#include <cmath>
using namespace std;
 
int main(){
    int const maxSize = 1;
    char value[maxSize];
    double digit;
    Stack s;
    double left, right, temp;
    while (value[0] != '=') {
            cin >> value[0];
            // right = pop(s);
            // left = pop(s);
            if (value [0] == '+' || value [0] == '-' || value [0] == '*' || value [0] == '/') {
                switch (value[0])
            {
                case '+': 
                    right = pop(s);
                    left = pop(s); 
                    temp = left + right;
                    push(s, temp);
                    break;
                case '-': // 
                    right = pop(s);
                    left = pop(s); 
                    temp = left - right;
                    push(s, temp);
                    break;
                case '*': 
                    right = pop(s);
                    left = pop(s); 
                    temp = left * right;
                    push(s, temp);
                    break;
                case '/': 
                    right = pop(s);
                    left = pop(s); 
                    temp = left / right;
                    push(s, temp);
                    break;
                default:
                    cout << "[ERROR] invalid operator: " << value[0]; // code to be executed if n doesn't match any cases
                break;
            }
        }
        else if (value [0] != '+' && value [0] != '-' && value [0] != '*' && value [0] != '/' && value [0] != '=') {
                digit = atof(&value[0]);
                push(s, digit);
            }
        }

        // cout << "HOLD ON" << endl;
    
    for (int i = 0; i < s.length; i++){
        cout << s.A[i];
    }
    
}