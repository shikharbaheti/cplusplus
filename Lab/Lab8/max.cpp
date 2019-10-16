int max(int A, int B) {
    if (A > B){
        return A;
    }
    else {
        return B;
    }
}
double max(double A, double B){
    if (A > B){
        return A;
    }
    else {
        return B;
    }
}
char max(char A, char B){
    if (A > B) {
        return A;
    }
    else {
        return B;
    }
}

int* max(int* array1, int A, int* array2, int B){
    if (A > B) {
        int *biggerArray = new int[A];
        for (int i = 0; i < A; i++) {
            biggerArray[i] = array1[i];
        }
        for (int i = 0; i < A; i++){
            if (array1[i] > array2[i]){
                biggerArray[i] = array1[i];
            }
            else {
                biggerArray[i] = array2[i];
                }
            }
            delete [] biggerArray;
        }
    else {
        int *biggerArray = new int[B];
        for (int i = 0; i < B; i++){
            biggerArray[i] = array2[i];
        }
        for (int i = 0; i < B; i++){
            if (array1[i] > array2[i]){
                biggerArray[i] = array1[i];
            }
            else {
                biggerArray[i] = array2[i];
                }
            }
        delete [] biggerArray;
    }
}

char* max(char*, char*) {
    
}
