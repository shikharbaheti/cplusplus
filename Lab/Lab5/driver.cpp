#include <iostream>  
#include "functions.h"
#include <cmath>
using namespace std;
 
 int main () {
   
	 int participants;
	 bool leftTest;
	 bool rightTest;
	 char leftTeam[255];
	 char rightTeam[255];
	 double totalForce;
	 cin >> participants;
	 cin >> leftTeam;
	 cin >> rightTeam;
	 double leftArray[200];
	 double rightArray[200];
	 readForceValuesFromStdIn(leftArray, rightArray, participants);
	 leftTest = validForces(leftArray, participants);
	 rightTest = validForces(rightArray, participants);
	 if (leftTest == false && rightTest == false){
		 cout << "both teams have an invalid force!" << endl; 
		 return 1;
	 } else if ((leftTest == false)) {
		 cout << leftTeam << " has an invalid force!";
		 return 1;
	 } else if ((rightTest == false)) {
		 cout << rightTeam << " has an invalid force!";
		 return 1;
	 }
	 totalForce = calculateForce(leftArray, rightArray, participants);
	 printWinnerToStdOut(leftTeam, rightTeam, totalForce);
 }