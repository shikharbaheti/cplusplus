#include <iostream>
#include <string>
using namespace std;

#include "functions.h"



/* readTweet
 * Parameters:
 *      line: string containing the tweet information received by the function
 *      isRetweet: reference to bool; function will update it with true if retweet
 *      nb_htags: reference to int; function will update with number of hashtags
 *                in the tweet.
 *      array_of_htags: reference to an array of strings; function will allocate
 *                      the array and store the hashtag in it
 * Return value:
 *      none
 * Functionality:
 *     Processes the string in order to find out hashtags and identify if it is Retweet
 */
void readTweet(string line, bool& isRetweet, int& nb_htags) {
        //, string*& array_of_htags
        for (int i = 0; i < line.size(); i++) { // CHECK IF RETWEET
            if (line.at (i) == ',' && line.at(i+1) == 'R' && line.at(i+2) == 'T'){
                isRetweet = true;
            }
        }
        for (int i = 0; i < line.size(); i++) { // CHECK IF RETWEET
            if (line.at (i) == '\'' && line.at(i+1) == 'R' && line.at(i+2) == 'T'){
                isRetweet = true;
            }
        }
        for (int i = 0; i < line.size(); i++) { // CHECK IF RETWEET
            if (line.at (i) == '\"' && line.at(i+1) == 'R' && line.at(i+2) == 'T'){
                isRetweet = true;
            }
        }


        if (isRetweet == true){
            cout << "Yes, retweet" << endl;
        }

        string hashTag; 

        for (int i = 0; i < line.size(); i ++){ // find hashtag
            if (line.at(i) == '#'){
                for (int j = i; j < line.size() && !isspace(line.at(j)); j++){
                    hashTag = hashTag + line.at(j);
                }
            }
        }

        cout << hashTag << endl;

    // make the array of hashtags
        // go into main >> 

}

/* insertHashtag
 * Parameters:
 *      ht: string
 *      hashlist: reference to OrderedHashtagList struct
 * Return value:
 *      true if insertion succeeds, false if memory allocation
 *      fails.
 * Functionality:
 *      See prompt for specification and examples.
 */

bool insertHashtag(string ht, OrderedHashtagList& hashlist) {
    cout << "To be implemented by the student" << endl;
    return true;
}

/* showMostPopularHashtags
 * Parameters:
 *      hashlist: reference to OrderedHashtagList struct
 * Return value:
 *      none
 * Functionality:
 *      Prints the k most popular hashtags.
 *      See prompt for formatting details.
 */
void showMostPopularHashtags(OrderedHashtagList hashlist, int k) {
    cout << "To be implemented by the student" << endl;
}


