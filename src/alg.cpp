// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int counter = 0;
    int lowInd = 0;
    int highInd = size-1;
    while (lowInd <= highInd) {
        int middleInd = lowInd+(highInd-lowInd)/2;
        if (arr[middleInd] > value)
            highInd--;
        else if (arr[middleInd] < value)
            lowInd++;
        else
            counter++;
    }
    return counter;
}
