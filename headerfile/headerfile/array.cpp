#include <iostream>
#include "array.hpp"

//source code - function definition - implementation
using namespace std;

void initializeArray(int* a, int SIZE) {
	int b;
	for (int i = 1; i < SIZE; i++)
	{
		cout << "Dizinin " << i << " degerini giriniz."<< endl;
		cin >> b;
		a[i] = b;
	}

}
void displayArray(int* a, int SIZE) {
	for (int i = 1; i < SIZE; i++)
	{
		cout << "a[" << i << "] : " << a[i] << endl;
	}
}

// mathematical operation 
double sumArray(int* a, int SIZE) {
	double sum = 0.0;
	for (int i = 1; i < SIZE; i++)
	{
		sum = a[i] + sum;
	}
	return sum;
}

double meanArray(int* a, int SIZE) {
	double mean = 0.0;

	mean = sumArray(a,SIZE) / SIZE;

	return mean;
}

// array mathematical calculation
int *sum2Array(int* array1, int* array2, int SIZE, int *ResultArray) {

	for (int i = 1; i <SIZE; i++)
	{
		ResultArray[i] = array1[i] + array2[i];
	}
	return ResultArray;
}

int* substract2Array(int* array1, int* array2, int SIZE, int* ResultArray){

	for (int i = 1; i <SIZE; i++)
	{
		ResultArray[i] = array1[i] - array2[i];
	}
	return ResultArray;
}

int* product2Array(int* array1, int* array2, int SIZE, int* ResultArray) {
	for (int i = 1; i < SIZE; i++)
	{
		ResultArray[i] = array1[i] * array2[i];
	}
	return ResultArray;
}
