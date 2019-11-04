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
        // for (int i = 0; i < line.size(); i++) { // CHECK IF RETWEET
        //     if (line.at (i) == ',' && line.at(i+1) == 'R' && line.at(i+2) == 'T'){
        //         isRetweet = true;
        //     }
        // }
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

        const int arrayOfHTagsCapacity = 10006;

        array_of_htags = new string[arrayOfHTagsCapacity];



        // cout << "Got here " << endl;

    string RT = "RT";
	string htagcount = "#";
    string spacecompare = " ";
	string endline = "\0";
	int counter = 0;

	for (int i = 0; ; ++i) {
		string test = "";
		string test2 = "";
		string htag = "";
		test.append(line, i, 2);
		if (test.compare(RT) == 0) {
			isRetweet = true;
		}
		// cout << "Got here " << endl;
		else if (test.compare(endline) == 0) {
			break;
		}
		test2.append(line, i, 1);
		if (test2.compare(htagcount) == 0) {
			nb_htags += 1;
			for (int j = i + 1; ; j++) {
				string space = "";
				string test3 = "";
				space.append(line, j, 1);
				test3.append(line, j, 2);
				// cout << "Got here again" << endl;
				if (space.compare(spacecompare) == 0 || test3.compare(endline) == 0) {
					break;
				}
				htag.append(line, j, 1);
			}
			array_of_htags[counter] = htag;
			counter += 1;
		}
	}       
}
        // for (int i = 0; i < line.size(); i ++){ // find hashtag
        //     if (line.at(i) == '#'){ // WHAT IF WE HAVE IF MORE THAN ONE HASHTAG IN THIS TWEET
        //         for (int j = i; j < line.size() && !isspace(line.at(j)); j++){
        //             hashTag = hashTag + line.at(j);
        //         }
        //         array_of_htags[nb_htags] = hashTag;
        //         nb_htags++;
        //     }
        // }
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
    int counter = 0;
	// cout << "Got here again" << endl;
	//for (int i = 0; i < nb_htags; i++){ //convert to lowercase, all of them.
//                 //     for (int j = 0; j < sizeof(array_of_htags[i]); j++){
//                 //         array_of_htags[i][j] = tolower(array_of_htags[i][j]);
//                 //     }
//                 // }
	for (int j = 0; ht[j] != '\0'; j++) {
		ht[j] = tolower(ht[j]);
	}
	// cout << "Got here again" << endl;
	for (int i = 0; i < hashlist.capacity; i++) {
		if (ht.compare(hashlist.list[i].name) == 0) {
			hashlist.list[i].counter += 1;
			counter += 1;
		}
	}

	
    // if (hashlist.size == hashlist.capacity){ // RESIZE
    //     hashlist.capacity = hashlist.capacity * 2;
    //     Hashtag* test2 = new Hashtag[hashlist.capacity];
    //     for (int i = 0; i < hashlist.size; i++){
    //         test2[i] = hashlist.list[i];
    //     }
    //     delete [] hashlist.list;
    //     hashlist.list = test2;
    // }

	// cout << "Got here again" << endl;
	if (counter == 0) {
		if ((hashlist.size + 1) > hashlist.capacity) {
			Hashtag* temp = new Hashtag[2 * hashlist.capacity];
			for (int k = 0; k < hashlist.capacity; k++) {
				temp[k] = hashlist.list[k];
			}
			delete[] hashlist.list;
			hashlist.list = temp;
			hashlist.capacity *= 2;
		}
		hashlist.list[hashlist.size].name = ht;
		hashlist.list[hashlist.size].counter += 1;
		hashlist.size += 1;
	}
	// cout << "Got here again" << endl;
	string temp[hashlist.size];
	long temp2[hashlist.size];
	int max = 0;
	string max_htag = "";
	int counts = 0;

	if (counter == 1) {
		for (int p = 0; p < hashlist.size; p++) {
			temp[p] = hashlist.list[p].name;
			temp2[p] = hashlist.list[p].counter;
		}
		for (int z = 0; z < hashlist.size; z++) {
			for (int z = 0; z < hashlist.size; z++) {
				if (temp2[z] > max) {
					max = temp2[z];
					max_htag = temp[z];
					counts = z;
				}
			// cout << "please work" << endl;	
			}
			hashlist.list[z].name = max_htag;
			hashlist.list[z].counter = max;
			temp2[counts] = 0;
			max = 0;
		}
	}
	return true;

    // for (int i = 0; i < hashlist.size; i++){
    //     if (ht == hashlist.list[i].name){
    //         hashlist.list[i].counter++;
    //         int index = i;
    //         while (index > 0 && hashlist.list[index].counter > hashlist.list[index - 1].counter){
    //             Hashtag temp = hashlist.list[index];
    //             hashlist.list[index] = hashlist.list[index - 1];
    //             hashlist.list[index - 1] = temp;
    //             index--;
    //         }
    //         return true;
    //     }
    // }
    // hashlist.list[hashlist.size].name = ht;
    // hashlist.list[hashlist.size].counter = 1;
    // hashlist.size++;
    // return true;
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
        cout << "Tag #" << hashlist.list[i].name << " - " << hashlist.list[i].counter << " occurrence(s)" << endl;
    }
    if (k == 0 || hashlist.size == 0){
        cout << "No hashtags." << endl;
    }
}


