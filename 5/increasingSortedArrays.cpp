#include <iostream>
using namespace std;

void merge (int* u, int n1, int* v, int n2){
    // u and v are in increasing order
    int indu = 0, int indv = 0;

    while (indu < n1 && indv < n2){
        if (u[indu] < v[indv]){
            cout << u[indu];
            indu = indu + 1;
        }
    }
    else {
        cout << v[indv];
        indv = indv + 1;
    }
    while (indu < n1){
        cout << u[indu];
        indu = indu + 1;

    }

    while (indv < n2){
        cout << v[indv];
        indv = indv + 1;
    }

}

int main(){
    const int MAX = 100;
    int u[MAX], v[MAX], n1, n2;

    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter the first array: ";
    for (int i = 0; int < n1; i++){
        cin >> u[i];
    }

    cout << "Enter n2: ";
    cin >> n2;
    cout << "Enter the first array: ";
    for (int i = 0; int < n2; i++){
        cin >> v[i];
    }

    merge(u, v, )
}

//finish this as well;