#include <iostream>
#include <fstream>
using namespace std;
const int MAX_NB_GAMES = 200;
const int MAX_TITLE_SIZE = 128;
const int daysInAYear = 365;

int findBestVacation (int duration,  int prefs[], int ngames, int plan[]) {
    int mostFun = 0;
    int gameID;
    for (int i = 1; i <= duration; i++){
        gameID = plan[i];
       if (prefs[gameID] > mostFun){
           mostFun = i;
       }
    }
return mostFun;
}

int main(){
int ngames = 5;
int duration = 4;
const int maxFilenameSize = 100;
const int maxPrefSize = 400;
const int daysInAYear = 365;
char titlesFile[maxFilenameSize];
char preferencesFile[maxFilenameSize];
char planFile[maxFilenameSize];
char gameTitles[MAX_NB_GAMES][MAX_TITLE_SIZE];
int prefs[5] = {0, 1, 2, 3, 4};
int plan[15] = {0, 2, 2, 2, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2};


}
