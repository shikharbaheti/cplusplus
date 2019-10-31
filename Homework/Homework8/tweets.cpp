#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "functions.h"

/* Starter code: used by function printMenu */
void printLine(string msg) {
    cout << msg << endl;
}

/* Starter code: function printMenu() is ready for you */
void printMenu() {
    cout << endl;
    printLine("Welcome to Aggieland Twitter Feeds Stats");
    printLine("The options are:");
    printLine("1. load tweet data file and update stats");
    printLine("2. show overall stats (number of tweets, retweets, and hashtags)");
    printLine("3. show most popular hashtags");
    printLine("9. quit");
    cout << "--------> Enter your option: ";
}

/* Starter code: function to read option from the user is ready for you */
int getOption() {
    int option;
    cin >> option;
    if (cin.fail()) {
	cin.clear();
	cin.ignore(256, '\n');
	return -1;
    } else {
	cin.ignore(256, '\n');
    }
    return option;
}

int main() {  
    printMenu();
    bool isRetweet; //Boolean to check if the line is Retweet or Not
    int nb_htags = 0; // Number of Hashtags in the line
    int numOfHashTags = 0;
    int numOfTweets = 0; //Number of TOTAL Tweets in the whole file
    int numOfRetweets = 0; // Number of TOTAL Retweets
    int arrayOfHtagsCapacity = 100001;
    string* array_of_htags = new string[arrayOfHtagsCapacity];
    string fileName;
    int numofReteweet = 0;
    if (getOption() == 1){
        cout << "Enter filename: " << endl; //ask the user to input a filename
        cin >> fileName; // getting the filename from the user
        ifstream fin;
        fin.open(fileName); //opening the file
        if (!fin){
            cout << "Please enter a valid file" << endl; // error in opening the file
            cin >> fileName;
        }
        string line;
        while(getline(fin, line)){
            readTweet(line, isRetweet, nb_htags, array_of_htags);

            if (line.at (0) == '2' && line.at(1) == '0' && line.at(2) == '1' && line.at(3) == '9'){ //CHECK IF LEGIT TWEET
                numOfTweets++;
            }

        }
        for (int i = 0; i < 100; i++){
            cout << array_of_htags[i] << endl;
        }
        numOfHashTags = nb_htags;
        cout << "Tweets: " << numOfTweets << ", Retweets: " << numOfRetweets << ", Hashtags: " << numOfHashTags << endl;
        return 0;
    }
    if (getOption() == 2){
        cout << "Selected 2" << endl;
    }
    if (getOption() == 3){
        cout << "Selected 3" << endl;
    }
    if (getOption() == 9){
        exit(-1); //TODO How do you quit out?? 
    }
    else {
        cout << "Please select a valid option" << endl;
    }

    delete [] array_of_htags;
    array_of_htags = nullptr;
}
   
    
