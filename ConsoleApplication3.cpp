#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
template <typename T1>
void max1(T1 *mas1, int const sz) {
	T1 max = 0;
	for (int i = 0; i < sz; i++)
	{
		cout<<"  " << mas1[i];
		if (mas1[i] > max) 
		{
			max = mas1[i];
		}
	}
	cout << " ћакс элемент в одномерном массиве : "<< max <<endl;
}

template <typename T1>
void max2(T1 **mas2, int sz) { //тут не могу пон€ть как передать двумерный массив
	T1 max2 = 0;
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j < sz; j++)
		{
			if (mas2[i][j] > max2)
			{
				max2 = mas2[i][j];
			}	
		}
	}
	cout << " макс элемент двумерного массива " << max2 << endl;
}	

int main()
{
	setlocale(LC_ALL, "");
	int const sz = 4;
	int arr1[sz];
	int arr2[sz][sz];
	int arr3[sz][sz][sz];
	srand(time(NULL));
//наполн€ем массив
	for (int i = 0; i < sz; i++)
	{
		arr1[i] = rand() % 100;
		for (int j = 0; j < sz; j++)
		{
			 arr2[i][j] = rand()% 100;
			 for (int z = 0; z < sz; z++)
			 {
				 arr3[i][j][z] = rand() % 100;
				// cout << " :m3: " << arr3[i][j][z] << " ";
			 }
			// cout << " :m2: " << arr2[i][j] << " ";
		}
		//cout << " :m1: " << arr1[i] << " ";
	}
	
	max1(arr1, sz);
	max2(arr2, sz);


}
