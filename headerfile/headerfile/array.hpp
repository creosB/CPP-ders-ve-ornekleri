#ifndef __ARRAY_HPP__ // E�er birden fazla kez tan�mlan�yorsa bunu g�rmezden gelerek bir kez tan�mlan�r.
#define __ARRAY_HPP__ // E�er tan�mlanmam��sa tan�mlar.

// declaration + information

// array operation
void initializeArray(int *a,int SIZE);
void displayArray(int *a, int SIZE);

// mathematical operation 

double sumArray(int* a, int SIZE);
double meanArray(int* a, int SIZE);

// array mathematical calculation

int *sum2Array(int* array1, int* array2, int SIZE, int *ResultArray); // belirledi�imiz 2 de�eri i�lem yap�p geri d�nd�rece�iz
int *substract2Array(int* array1, int* array2, int SIZE, int *ResultArray); 
int *product2Array(int* array1, int* array2, int SIZE, int *ResultArray);


#endif