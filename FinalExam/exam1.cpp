//1
bool isHappy(int n){

    int sum = n;

    while (sum != 4 || sum != 1)
    int one = n % 10;
    n = n / 10;
    int ten = n % 10;
    n = n / 10;
    int hundred = n;

    sum = (one * one) + ((ten) * (ten)) + (hundred * hundred);

    for (int i = 0; i )

    if (sum == 1){
        return true;
    }

    return false;
} // complete this

//2

void problem2 (int n, int array[], int k){

    int output[10];

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (array[i] + array[j] == k){
                output[i] = i;
                output[i+1] = j;
            }
        }
    }

    for (int int i = 0; i < 10; i++){
        cout << output[i] << " " << endl;
    }
}

//3

//6
bool istriangle(int n){
    for (int i = 0; i < n; i++){
        if ((i * (i + 1) * (i + 2)) == n){
            return true;
        }
    }
    return false;
}

//7
int arraysegments (int input[n], n){
    int segments;
    for (int i = 0; i < (n-1); i++){
        if (input[i] == input(i+1)){
            segments++;
        }
    }
    return segments;
}


void resizeArray(int k, int m, int *array1, int* array2){

int** p = new int*[5];
    for (int i = 0; i < 5; i++) {
    p[i] = new int[10];
    }
}

//for instance if n = 5, and n * 2 = 10;

int main(){

    int n = 5;

    int** newarray = new int*[n*2];

    for (int i = 0; i < (n*2); i++){
        newarray[i] = new int[n*2];
    }

    for (int i = 0; i < (n*2); i++){
        for (int j = 0; j < (n*2); j++){
            // newarray[i][j] = oldarray[i][j];
        }
    }
}

// DELETE OLD ARRAY AFTER THIS!!! 

//Rule of three:
/*

You need to explicitly 
declare either the destructor, 
copy constructor or 
copy assignment operator yourself, 
you probably need to explicitly declare all three of them.


1) Destructor
    1) Deletes memory or deletes an object (like freeing up memory, or dealing with pointers)
    2) Usually starts with a ~thenClassName();

2) Copy Constructors
    1) Member class function which initiliazes an object using another object of the same class. 
    2) This following structure:
        ClassName (const ClassName &old_obj);
    3) Example:
        Point(const Point &p2) {x = p2.x; y = p2.y;}

3) Copy assignment operator
    1) Essentially copies object1 to object2's values of the same class.
    2) Shallow copy! 
    3) MyArray& operator=(const MyArray& other){
            if (this != &other) {
        return *this; //ALWAYS RETURN THIS!!!
        }
    }
*/
