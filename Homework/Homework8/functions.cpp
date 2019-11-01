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
void readTweet(string line, bool& isRetweet, int& nb_htags, string*& array_of_htags){
        for (int i = 0; i < line.size(); i++) { // CHECK IF RETWEET
            if (line.at (i) == ',' && line.at(i+1) == 'R' && line.at(i+2) == 'T'){
                isRetweet = true;
            }
        }
        // }
        // for (int i = 0; i < line.size(); i++) { // CHECK IF RETWEET
        //     if (line.at (i) == '\'' && line.at(i+1) == 'R' && line.at(i+2) == 'T'){
        //         isRetweet = true;
        //     }
        // }
        // for (int i = 0; i < line.size(); i++) { // CHECK IF RETWEET
        //     if (line.at (i) == '\"' && line.at(i+1) == 'R' && line.at(i+2) == 'T'){
        //         isRetweet = true;
        //     }
        // }

        string hashTag; 

        for (int i = 0; i < line.size(); i ++){ // find hashtag
            if (line.at(i) == '#'){ // WHAT IF WE HAVE IF MORE THAN ONE HASHTAG IN THIS TWEET
                for (int j = i; j < line.size() &&  !isspace(line.at(j)); j++){
                    hashTag = hashTag + line.at(j);
                }
                array_of_htags[nb_htags] = hashTag;
                nb_htags++;
            }
        }
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
    if (hashlist.size == hashlist.capacity){ // RESIZE
        hashlist.capacity = hashlist.capacity * 2;
        Hashtag* test2 = new Hashtag[hashlist.capacity];
        for (int i = 0; i < hashlist.size; i++){
            test2[i] = hashlist.list[i];
        }
        delete [] hashlist.list;
        hashlist.list = test2;
    }
    for (int i = 0; i < hashlist.size; i++){
        if (ht == hashlist.list[i].name){
            hashlist.list[i].counter++;
            int index = i;
            while (index > 0 && hashlist.list[index].counter > hashlist.list[index - 1].counter){
                Hashtag temp = hashlist.list[index];
                hashlist.list[index] = hashlist.list[index - 1];
                hashlist.list[index - 1] = temp;
                index--;
            }
            return true;
        }
    }
    hashlist.list[hashlist.size].name = ht;
    hashlist.list[hashlist.size].counter = 1;
    hashlist.size++;
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
    
    for (int i = 0; i < k && i < hashlist.size; i++){
        cout << "Tag " << hashlist.list[i].name << " - " << hashlist.list[i].counter << " occurrence(s)" << endl;
    }
  
}


