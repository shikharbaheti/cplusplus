#include <iostream>
#include <string>
#include <sstream>
#include "Stack.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    Stack<string> s;

    string word;
    getline(cin, word, '.');
    std::istringstream iss(word);
    while (iss >> word) {    
        s.push(word);
    }
    // cout << std::to_string(s.pop()) << endl;

    while (!(s.isEmpty())){
        cout << s.pop() << " ";
    }

    return 0;
}
