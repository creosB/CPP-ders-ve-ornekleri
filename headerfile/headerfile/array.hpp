#ifndef __ARRAY_HPP__ // Eðer birden fazla kez tanýmlanýyorsa bunu görmezden gelerek bir kez tanýmlanýr.
#define __ARRAY_HPP__ // Eðer tanýmlanmamýþsa tanýmlar.

// declaration + information

// array operation
void initializeArray(int *a,int SIZE);
void displayArray(int *a, int SIZE);

// mathematical operation 

double sumArray(int* a, int SIZE);
double meanArray(int* a, int SIZE);

// array mathematical calculation

int *sum2Array(int* array1, int* array2, int SIZE, int *ResultArray); // belirlediðimiz 2 deðeri iþlem yapýp geri döndüreceðiz
int *substract2Array(int* array1, int* array2, int SIZE, int *ResultArray); 
int *product2Array(int* array1, int* array2, int SIZE, int *ResultArray);


#endif