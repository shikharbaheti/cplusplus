#include <iostream>
using namespace std;

bool isEvenGeneric(char *s, char *v) {
	int count = 0;
	int i = 0;
	while(v != '\0'){
		int j = 0;
		while(s != '\0') {
			if(v[i] == s[j]) {
				count += 1;
				cout << s[j] << endl;
			}//if bracket
			j++;
		}//2nd while bracket
		i++;
		}//1st while bracket
	if(count % 2 == 0) {
		return true;
	} else {
		return false;
	}
}

int main() {
	char s[] = "family of functions\0";
	char v[] = "aeiou\0";
	isEvenGeneric(s, v);
}