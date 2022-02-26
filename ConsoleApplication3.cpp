#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
template <typename T1>
void max1(T1 mas1[], int const sz) {
	T1 max = 0;
	for (int i = 0; i < sz; i++)
		cout << "  " << mas1[i];
		if (mas1[i] > max)
			max = mas1[i];

	
	cout << " Макс элемент в одномерном массиве : " << max << endl;
}

template <typename T1>
void max2(T1 mas2[4] [4], int sz) {
	T1 max = 0;
	for (int i = 0; i < sz; i++)
		for (int j = 0; j < sz; j++)
			if (mas2[i][j] > max)
				max = mas2[i][j];
				cout << " " << mas2[i][j];
		
	
	cout << " макс элемент двумерного массива " << max << endl;
}
template <typename T1>
void max3(T1 mas3[4][4][4], int sz) {
	T1 max = 0;
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j < sz; j++)
		{
			for (int z = 0; z < sz; z++)
			{
				if (mas3[i][j][z] > max)
			{
				max = mas3[i][j][z];
			}
			cout << " " << mas3[i][j][z];
			}

			
		}
	}
	cout << " макс элемент трехмерного массива " << max << endl;
}


int main()
{
	setlocale(LC_ALL, "ru");
	int const sz = 4;
	int arr1[sz];
	int arr2[sz][sz];
	int arr3[sz][sz][sz];
	srand(time(NULL));
	//наполняем массив
	for (int i = 0; i < sz; i++)
	{
		arr1[i] = rand() % 100;
		for (int j = 0; j < sz; j++)
		{
			arr2[i][j] = rand() % 100;
			for (int z = 0; z < sz; z++)
			{
				arr3[i][j][z] = rand() % 100;
			}
		}
	}

	max1(arr1, sz);
	max2(arr2, sz);
	max3(arr3, sz);

}
