#include "functions.h"
#include "provided.h"
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
int ngames;
int duration;
const int maxFilenameSize = 100;
const int maxPrefSize = 400;
const int daysInAYear = 366;
char titlesFile[maxFilenameSize];
char preferencesFile[maxFilenameSize];
char planFile[maxFilenameSize];
char gameTitles[MAX_NB_GAMES][MAX_TITLE_SIZE];
int prefs[maxPrefSize];
int plan[daysInAYear];
// int mostFun = 0;
// int startDate;


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
        if (readGameTitles(titlesFile, ngames, gameTitles) == -1 || readPrefs(preferencesFile, ngames, prefs) == -1 || readPlan(planFile, ngames, plan) == -1) {
            cout << "Invalid file.";
        }
        else {
            readPlan(planFile, ngames, plan);
            readPrefs(preferencesFile, ngames, prefs);
            readGameTitles(titlesFile, ngames, gameTitles);
            
            cout << "Best start day is " << findBestVacation(duration, prefs, ngames, plan) << endl;
            int BestDayStart = findBestVacation(duration, prefs, ngames, plan);
            cout << "Games to be played: " << endl;
            printGamesPlayedInVacation(BestDayStart, duration, plan, gameTitles, ngames);
        }
}