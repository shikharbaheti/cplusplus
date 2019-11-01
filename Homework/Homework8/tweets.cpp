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

// void movingForard(){
//     printMenu;
//     getOption();
// }

int main()
{
    int option = 0;
    bool isRetweet = false;
    OrderedHashtagList hashlist;
    int numberOfTweets = 0; // Total number of tweets
    int numberOfRetweets = 0; //Total number of Retweets
    int numberOfHastags = 0; //Total number of Hashtags
    int arrayHTagsCapacity = 10000;
    int nb_htags = 0;
    int k = 10;
    string* array_of_htags = new string [arrayHTagsCapacity];
    string fileName;
    ifstream fin;
    string line;

do {

    printMenu();
    option = getOption();

    switch (option) {
        case 1:
                cout << "Enter filename: " << endl; //ask the user to input a filename
                cin >> fileName; // getting the filename from the user
                fin.open(fileName); //opening the file
                // if (!fin) {
                // cout << "Please enter a valid file, idiot" << endl; // error in opening the file
                // cin >> fileName;
                // }

                while(getline(fin, line)) { //read each line
                readTweet(line, isRetweet, nb_htags, array_of_htags);
                    if (isRetweet == true){
                        numberOfRetweets++;
                    }
                }
                for (int i = 0; i < nb_htags; i++){ //convert to lowercase, all of them.
                    for (int j = 0; j < sizeof(array_of_htags[i]); j++){
                        array_of_htags[i][j] = tolower(array_of_htags[i][j]);
                    }
                }

                for (int i = 0; i < nb_htags; i++){
                insertHashtag(array_of_htags[i], hashlist);
                }

            break;
        case 2:
            cout << 
            "Tweets: " << numberOfTweets << ", " <<
            "Retweets: " << numberOfRetweets << ", " <<
            "Hashtags: " << numberOfHastags << endl;
            break;
        case 3:
            showMostPopularHashtags(hashlist, k);
            break;    
        case 9:
            break;
        default:
            cout << "Please select a valid option" << endl;
        }

    } while (option != 9);

}

