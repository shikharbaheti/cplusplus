#include "functions.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <limits>
using namespace std;


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
    }
    return actualValues;
}

int readPlan(char fileName[], int ngames, int plan[]){
    ifstream fin;
    int day;
    int gamePlan;
    int daysInAYearForThisPurpose = 366;
    fin.open(fileName);
    if (!fin) { // error in opening the file
	return -1;
    }
    else {
        for (int i = 1; i < (daysInAYearForThisPurpose); i ++){
            fin >> day;
            fin >> gamePlan;
            plan[day] = gamePlan;
        }
    }
    return 0;
}

int computeFunLevel (int start, int duration, int prefs[], int ngames, int plan[]){
    int sum = 0;
    int gameID;
    int location;
    if (duration > (365 - start)){
        return -1;
    }

    for (int i = 0; i < duration; i++){
        location = i + start;
        gameID = plan[location];
        sum = sum + prefs[gameID];
    }
return sum;
}

int findBestVacation (int duration,  int prefs[], int ngames, int plan[]) {
    int mostFun = 0;
    int pleaseJustWork;
    int index;
    for (int i = 1; i < 366; i++){

        pleaseJustWork = computeFunLevel(i, duration, prefs, ngames, plan);

        if (pleaseJustWork > mostFun){
            mostFun = pleaseJustWork;
            index = i;
        }

    //     gameID = plan[i];
    //    if (prefs[gameID] > mostFun){
    //        mostFun = i;
    //    }
       //cout << "Pref: " << prefs[i] << " and Plan: " << plan[i] << endl;
    }
return index;
}

