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
    bool cont = true;
    printMenu();
    bool isRetweet;
    OrderedHashtagList hashlist;
    int numberOfTweets = 0; // Total number of tweets
    int numberOfRetweets = 0; //Total number of Retweets
    int numberOfHastags = 0; //Total number of Hashtags
    int arrayHTagsCapacity = 100101;
    int nb_htags = 0;
    int k = 10;
    string* array_of_htags = new string [arrayHTagsCapacity];
    string fileName;
    int numofReteweet = 0;
    if (getOption() == 1){
        cout << "Enter filename: " << endl; //ask the user to input a filename
        cin >> fileName; // getting the filename from the user
        ifstream fin;
        fin.open(fileName); //opening the file
        if (!fin) {
            cout << "Please enter a valid file, idiot" << endl; // error in opening the file
            cin >> fileName;
        }
        string line;
        while(getline(fin, line)){
                readTweet(line, isRetweet, nb_htags, array_of_htags);
        }

        //CONVERT ALL TO LOWER
        for (int i = 0; i < nb_htags; i++){
            for (int j = 0; j < sizeof(array_of_htags[i]); j++){
                array_of_htags[i][j] = tolower(array_of_htags[i][j]);
            }
        }

        for (int i = 0; i < nb_htags; i++){
            cout << i << ": " << array_of_htags[i] << endl;
        }

        cout << "___ END OF ARRAY OF HTAGS __ " << endl;

        for (int i = 0; i < nb_htags; i++){
            insertHashtag(array_of_htags[i], hashlist);
        }

        for (int i = 0; i < hashlist.size; i++){
            cout << hashlist.list[i].name << " " << hashlist.list[i].counter << endl;
        }

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
}
   
    
