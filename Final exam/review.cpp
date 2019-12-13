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

/*
Array : traverse them, compute something on each element, make sure we have no out-of-bound access
*/

/*
Dynamically allocated arrays (new operator)

array with double n elements:
    double *a = new double[n];

-- Resizing. 

*/

/*
Shallow copy vs deep copy
*/

/*
Linked lists. 
*/

/*
Inheritance
*/

int main(){

    

    double n;
    double* a = new double[n];

    /*
        resize array to have double the number of positions (capacity).
    */

   double* newarray = new double [n * 2];
   for (int i = 0; i < n; i++){
       newarray[i] = a[i];
   }
   delete [] a; //delete memory
   //this should do it. 

   //allocate 2d array of 4 rows and c cols.

    int r = 10;
    int c = 20;

    //want to allocate matrix r by c. 

    int** m = new int*[r]; //this is the array of rows (each row is an array)

    for (int i = 0; i < r; i++){
        m[i] = new int [c];
    }

    //deallocate m;
    for (int i=0; i < r; i++){
        delete [] m[i];
    }
    delete [] m;
}

/*


2-d arrays. 

m[n][c] == array of arrays. 

Each position of array M is also an array. 

Resizing a double array.

*/