// /*#include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// #include "functions.h"

// /* Starter code: used by function printMenu */
// void printLine(string msg) {
//     cout << msg << endl;
// }

// /* Starter code: function printMenu() is ready for you */
// void printMenu() {
//     cout << endl;
//     printLine("Welcome to Aggieland Twitter Feeds Stats");
//     printLine("The options are:");
//     printLine("1. load tweet data file and update stats");
//     printLine("2. show overall stats (number of tweets, retweets, and hashtags)");
//     printLine("3. show most popular hashtags");
//     printLine("9. quit");
//     cout << "--------> Enter your option: ";
// }

// /* Starter code: function to read option from the user is ready for you */
// int getOption() {
//     int option;
//     cin >> option;
//     if (cin.fail()) {
// 	cin.clear();
// 	cin.ignore(256, '\n');
// 	return -1;
//     } else {
// 	cin.ignore(256, '\n');
//     }
//     return option;
// }

// // void movingForard(){
// //     printMenu;
// //     getOption();
// // }

// int main()
// {

//     int option = 0;
//     bool isRetweet = false;
//     OrderedHashtagList hashlist;
//     int numberOfTweets = 0; // Total number of tweets
//     int numberOfRetweets = 0; //Total number of Retweets
//     int numberOfHastags = 0; //Total number of Hashtags
//     int arrayHTagsCapacity;
//     int nb_htags = 0;
//     int k = 10;
//     string fileName;
//     ifstream fin;
//     string line;

//     // cout << "Got to this part - 1" << endl;

// do {
//     // cout << "Got to this part - 2" << endl;
//     printMenu();
//     option = getOption();

//     // cout << "Got to this part - 3" << endl;
//

//     } while (option != 9);

// }

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "functions.h"

/* Starter code: used by function printMenu */
void printLine(string msg)
{
	cout << msg << endl;
}

/* Starter code: function printMenu() is ready for you */
void printMenu()
{
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
int getOption()
{
	int option;
	cin >> option;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(256, '\n');
		return -1;
	}
	else
	{
		cin.ignore(256, '\n');
	}
	return option;
}

int main()
{

	//switch (option) {
	//         case 1:
	//                 // cout << "Got to this part - 4" << endl;
	//                 // cout << "Enter filename: " << endl; //ask the user to input a filename
	//                 // cin >> fileName; // getting the filename from the user
	//                 // fin.open(fileName); //opening the file
	//                 // // if (!fin) {
	//                 // // cout << "Please enter a valid file, idiot" << endl; // error in opening the file
	//                 // // cin >> fileName;
	//                 // // }
	//                 // // cout << "Got to this part - 5" << endl;

	//                 // while(getline(fin, line)) { //read each line
	//                 // arrayHTagsCapacity++;
	//                 // }

	//                 // // cout << arrayHTagsCapacity << " Size of arrayHTagsCapacity" << endl;

	//                 // string* array_of_htags = new string[arrayHTagsCapacity];

	//                 // while(getline(fin, line)) { //read each line
	//                 // readTweet(line, isRetweet, nb_htags, array_of_htags);
	//                 //     cout << "yeet got here" << endl;
	//                 //     // if (isRetweet == true){
	//                 //     //     numberOfRetweets++;
	//                 //     // }
	//                 // }

	//                 // for (int i = 0; i < arrayHTagsCapacity; i ++){
	//                 //     cout << array_of_htags[i] << endl;
	//                 // }

	//                 // cout << nb_htags << endl;

	//                 // // for (int i = 0; i < nb_htags; i++){
	//                 // //     cout << i << ": " << array_of_htags[i] << endl;
	//                 // // }

	//                 // // cout << "Nb tags at this point=" << nb_htags;
	//                 // // cout << "Got to this part - 6" << endl;
	//                 // for (int i = 0; i < nb_htags; i++){ //convert to lowercase, all of them.
	//                 //     for (int j = 0; j < sizeof(array_of_htags[i]); j++){
	//                 //         array_of_htags[i][j] = tolower(array_of_htags[i][j]);
	//                 //     }
	//                 // }
	//                 // // cout << "Got to this part - 7" << endl;
	//                 // for (int i = 0; i < nb_htags; i++){
	//                 // insertHashtag(array_of_htags[i], hashlist);
	//                 // }
	//                 // // cout << hashlist.size << endl;
	//                 // cout << "Got to this part - 8" << endl;

	//         cout << "Enter filename: " << endl; //ask the user to input a filename
	//         cin >> fileName; // getting the filename from the user
	//         ifstream fin;
	//         fin.open(fileName); //opening the file
	//         if (!fin) {
	//             cout << "Please enter a valid file, idiot" << endl; // error in opening the file
	//             cin >> fileName;
	//         }
	//         while(getline(fin, line)) { //read each line
	//                 arrayHTagsCapacity++;
	//                 }
	//         cout << arrayHTagsCapacity << endl;
	//         string* array_of_htags = new string[arrayHTagsCapacity];
	//         string line;
	//         while(getline(fin, line)){
	//                 readTweet(line, isRetweet, nb_htags, array_of_htags);
	//         }
	//         cout << nb_htags << endl;
	//         //CONVERT ALL TO LOWER
	//         for (int i = 0; i < nb_htags; i++){
	//             for (int j = 0; j < sizeof(array_of_htags[i]); j++){
	//                 array_of_htags[i][j] = tolower(array_of_htags[i][j]);
	//             }
	//         }

	//         for (int i = 0; i < nb_htags; i++){
	//             cout << i << ": " << array_of_htags[i] << endl;
	//         }

	//         cout << "___ END OF ARRAY OF HTAGS __ " << endl;

	//         for (int i = 0; i < nb_htags; i++){
	//             insertHashtag(array_of_htags[i], hashlist);
	//         }

	//         for (int i = 0; i < hashlist.size; i++){
	//             cout << hashlist.list[i].name << " " << hashlist.list[i].counter << endl;
	//         }

	//             break;
	//         case 2:
	//             // cout << "Got to this part - 9" << endl;
	//             cout <<
	//             "Tweets: " << numberOfTweets << ", " <<
	//             "Retweets: " << numberOfRetweets << ", " <<
	//             "Hashtags: " << numberOfHastags << endl;
	//             break;
	//             // cout << "Got to this part - 10" << endl;
	//         case 3:
	//             showMostPopularHashtags(hashlist, k);
	//             break;
	//         case 9:
	//             break;
	//         default:
	//             cout << "Please select a valid option" << endl;
	//         }

	int nb_tags = 0;
	int numberOfTweets = 0;
	int numberOfRetweets = 0;
	int option = 0;
	bool isRetweet = 0;
	int k = 10;
	string *array_of_htags;
	string filename;
	OrderedHashtagList hashlist;

	printMenu();
	option = getOption();

	while (option != 9)
	{
		if (option == 1)
		{
			cout << "Enter filename:" << endl;
			cin >> filename;
			ifstream fileName;
			fileName.open(filename);
			while (!fileName.eof())
			{
				if (fileName.fail())
				{
					cout << " File can't be opened." << endl;
					break;
				}
				string line;
				int tweetLength = 0;
				getline(fileName, line);
				for (int h = 0; line[h] != '\0'; h++)
				{
					tweetLength += 1;
				}
				if (tweetLength == 0)
				{
					break;
				}
				readTweet(line, isRetweet, nb_tags, array_of_htags);
				for (int i = 0; i < nb_tags; i++)
				{
					insertHashtag(array_of_htags[i], hashlist);
				}
				numberOfTweets += 1;
				if (isRetweet == 1)
				{
					numberOfRetweets += 1;
				}
				nb_tags = 0;
				isRetweet = 0;
				delete[] array_of_htags;
			}
		}
		else if (option == 2)
		{
			cout << "Tweets: " << numberOfTweets << ", Retweets: " << numberOfRetweets << ", Hashtags: " << hashlist.size << endl;
		}
		else if (option == 3)
		{
			showMostPopularHashtags(hashlist, k);
		}
		else if (option != 1 || option != 2 || option != 3 || option != 9)
		{
			cout << " Invalid option" << endl;
		}
		printMenu();
		option = getOption();
	}
	return 0;
}
