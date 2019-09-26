#include <iostream>
#include <cmath>
#include "functions.h"
using namespace std;

bool validForces(const double *forces, unsigned const int noParticipants) {
    for (int i = 0; i < noParticipants; ++i) {
        if (forces[i] < 0) {
            return false;
        }
    }
    return true;
}

double calculateForce(const double* leftTeam, const double* rightTeam, unsigned const int noParticipants) {

}

void printWinnerToStdOut(const char* leftTeamName, const char* rightTeamName, const double netForce) {

}
