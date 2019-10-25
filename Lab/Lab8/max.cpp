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
        int *biggerA = new int[A];
        for (int i = 0; i < A; i++) {
            biggerA[i] = array1[i]; 
        }
        for (int i = 0; i < A; i++) {
            if (array1[i] < array2[i]){
                biggerA[i] = array2[i];
            }
            else {
                biggerA[i] = array1[i];
            }
        }
        //delete [] biggerA;
        return biggerA;
    }
    else {
        int *biggerB = new int[B];
        for (int i = 0; i < B; i++){
            biggerB[i] = array2[i];
        }
        for (int i = 0; i < B; i++){
            if (array1[i] < array2[i]){
                biggerB[i] = array2[i];
            }
            else {
                biggerB[i] = array1[i];
            }
        }
        //delete [] biggerB;
        return biggerB;
    }
}

void lowerB(char *stringB){
    for (int i = 0; stringB[i] != '\0'; ++i) {
        if ((int) stringB[i] < 97){
            stringB[i] = (char) ((int) stringB[i] + 32);
        }
    }
}

void lowerA(char *stringA){
    for (int i = 0; stringA[i] != '\0'; ++i) {
        if ((int) stringA[i] < 97){
            stringA[i] = (char) ((int) stringA[i] + 32);
        }
    }
}


char* max(char* stringA, char* stringB) {
    lowerA(stringA);
    lowerB(stringB);
    int index = 0;
    while (stringA[index] == stringB[index] && stringA[index] != '\0' && stringB[index] != '\0'){
        index++;
    } 
    if (stringA[index] > stringB[index]) {
        return stringB;
    }
    else {
        return stringA;
    }
}
