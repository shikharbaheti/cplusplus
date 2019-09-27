#include <iostream>  
#include "functions.h"
#include <cmath>
using namespace std;

 void readForceValuesFromStdIn(double* leftTeam, double* rightTeam, unsigned const int noParticipants) {
	 int i = 0;
	 while (i < noParticipants) {
		 cin >> leftTeam[i];
		 cin >> rightTeam[i];
		 i += 1;
	 }
 }
 
 bool validForces(const double* forces, unsigned const int noParticipants) {
	 for (int i = 0; i < noParticipants; ++i) {
        if (forces[i] < 0) {
            return false;
        }
    }
    return true;
}

double calculateForce(const double* leftTeam, const double* rightTeam, unsigned const int noParticipants) {
	double total = 0;
	int i = 0;
	while (i < noParticipants) {
		total += leftTeam[i];
		total -= rightTeam[i];
		i += 1;
	}
	return total;
}

void printWinnerToStdOut(const char* leftTeamName, const char* rightTeamName, const double netForce) { 
	if (netForce > 5){
		cout << leftTeamName << " wins!" << endl;
	} else if (netForce < -5) {
		cout << rightTeamName << " wins!" << endl;
	} else {
		cout << "Tie." << endl;
	}