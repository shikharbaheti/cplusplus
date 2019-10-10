#include <iostream>
#include <fstream>
using namespace std;
const int MAX_NB_GAMES = 200;
const int MAX_TITLE_SIZE = 128;
const int daysInAYear = 365;

int readPlan(char fileName[], int ngames, int plan[]){
    ifstream fin;
    int day;
    int gamePlan;
    fin.open(fileName);
    if (!fin) { // error in opening the file
	return -1;
    }
    else {
        for (int i = 1; i < (daysInAYear + 1); i ++){
            fin >> day;
            fin >> gamePlan;
            plan[day] = gamePlan;
        }
    }
    return 0;
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

        readPlan(planFile, ngames, plan);
}