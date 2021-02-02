#include <iostream>
#include "array.hpp"

using namespace std;


#define SIZE 10

int main()
{

    int array1[SIZE];
    int array2[SIZE];

    initializeArray(array1, SIZE);
    displayArray(array1, SIZE);

    double meanArrayValue = meanArray(array1, SIZE);
    double sumArrayValue = sumArray(array1, SIZE);

    cout << "\nMean of the array is: " << meanArrayValue << endl;
    cout << "Sum of the array is: " << sumArrayValue << endl;
    cout << "\n----- Array 2 is starting -----\n\n";

    initializeArray(array2, SIZE);
    displayArray(array2, SIZE);

    cout << "\n----- Two array sum is starting -----\n\n";
    int resultArray[SIZE];
    sum2Array(array1, array2, SIZE, resultArray);
    displayArray(resultArray, SIZE);

    cout << "\n----- Two array substract is starting -----\n\n";
    substract2Array(array1, array2, SIZE, resultArray);
    displayArray(resultArray, SIZE);

    cout << "\n----- Two array product is starting -----\n\n";
    product2Array(array1, array2, SIZE, resultArray);
    displayArray(resultArray, SIZE);


}