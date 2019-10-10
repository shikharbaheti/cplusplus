#include <iostream>
#include <fstream>
using namespace std;
const int MAX_NB_GAMES = 200;
const int MAX_TITLE_SIZE = 128;
const int daysInAYear = 365;

int readPrefs(char fileName[], int ngames, int prefs[]){
    int ratings;
    int gameID;
    int actualValues = 0;
    ifstream fin;
    fin.open(fileName);
    if (!fin) { // error in opening the file
	return -1;
    }
    else {
        for (int i = 0; i < ngames; i ++) {
            fin >> gameID;
            //if (i == gameID){
                fin >> ratings;
                if (ratings > 0 && ratings <= 5){
                    actualValues = actualValues + 1;
                    prefs[gameID] = ratings;
                }
                
        }
        for (int i = 0; i < ngames; i ++) {
            cout << i << ": " << prefs[i] << endl;
        }
    }
    return actualValues;
}

int main(){
int ngames;
int duration;
const int maxFilenameSize = 100;
const int maxPrefSize = 400;
const int daysInAYear = 365;
char titlesFile[maxFilenameSize];
char preferencesFile[maxFilenameSize];
char planFile[maxFilenameSize];
char gameTitles[MAX_NB_GAMES][MAX_TITLE_SIZE];
int prefs[maxPrefSize];
int plan[daysInAYear];

cout << "Please enter ngames and duration: " << endl;
    cin >> ngames >> duration;
    if (ngames < 0 || ngames >=200 || duration < 0 || duration >= 365){
        cout << "Invalid input.";
        return 0;
    }
        cout << "Please enter name of file with titles: " << endl;
        cin >> titlesFile;
        cout << "Please enter name of file with preferences: " << endl;
        cin >> preferencesFile;
        cout << "Please enter name of file with plan: " << endl;
        cin >> planFile;

        cout << readPrefs(preferencesFile, ngames, prefs);
}