#include <iostream>
using namespace std;
#include <fstream>
const int maxPrefSize = 400;

// int readPrefs(char fileName[], int ngames, int prefs[]) {
//     int gameID;
//     int rating;
//     int constantPref = 500;
//     int sum = 0;
//     ifstream fin;
//     fin.open(fileName);
//     for (int i = 0; i < maxPrefSize; i++){
//         fin >> gameID;
//         fin >> rating;
//         if (rating >= 0) && (rating <= 5){
//             prefs[gameID] = rating;
//         } 
//         prefs[gameID] = rating;

//     }
//     return sum;
// }




int main(){
    const int maxFilenameSize = 280;
    char preferencesFile[maxFilenameSize];
    cin >> preferencesFile;
    cin
    const int ngames = 10;
    int gameID;
    int ratings;
    const int maxPrefSize = 400;
    int prefs[maxPrefSize];
    int plan[15] = {0, 2, 0, 3, 3, 4, 0, 1, 2, 3, 3, 1, 3, 4, 4};
    cout << readPrefs(preferencesFile, ngames, prefs);
}