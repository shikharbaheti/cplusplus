/* given an array of n>=1 numbers, count how many times two elements in a row are even.

    For array with n = 1, elements: 4 output is 0
        array      n = 3, elements: 2 2 3 output is 1
        array      n = 3, elements: 2 2 2 output is 2

*/

int counteven(int* array, int n){
    int count = 0;
    for (int i = 0; i < n - 1; i++){
        // if (i != n - 1)
        if (array[i] % 2 == 0 && (array[i+1] % 2  == 0)){
            count ++; 
        }
    }
    return count;
}
