// Copyright 2021 NNTU-CS
int sortMas(int *arr, int size) {
    for (int i = 1; i < size; i++) {
        bool isSorted = true;
        for (int j = 0; j < size - i; j++) {
            if (arr[j] > arr[j+1]) {
                int par = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = par;
                isSorted = false;
            }
            if (isSorted)
                break;
        }
    }
    return 0;
}

int cbinsearch(int *arr, int size, int value) {
    sortMas(arr, size);
    int counter = 0;
    int lowInd = 0;
    int highInd = size-1;
    while (lowInd <= highInd) {
        int middleInd = lowInd+(highInd-lowInd)/2;
        if (arr[middleInd] > value)
            highInd = middleInd-1;
        else if (arr[middleInd] < value)
            lowInd = middleInd+1;
        else
            counter++;
    }
    return counter;
}
