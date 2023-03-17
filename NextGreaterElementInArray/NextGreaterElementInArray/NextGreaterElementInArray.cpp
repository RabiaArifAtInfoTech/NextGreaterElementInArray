#include<iostream>

int nextGreater(int element, int arr[], int n, int position)
{
	for (int j = position + 1; j < n; j++)
	{
		if (arr[j] > element)
		{
			return arr[j];
		}
	}
	return -1;
}


int* nextGreaterElementArr(int arr[], int n)
{
	int* tempArr = new int[n];
	for (int i = 0; i < n - 1; i++)
	{
		tempArr[i] = nextGreater(arr[i], arr, n, i);
		//std::cout <<"\nin:" <<  tempArr[i];
	}
	tempArr[n - 1] = -1;

	return tempArr;
}


int main()
{
	const int N = 4;
	int arr[N] = { 6 ,8 ,7 ,9 };

	
	int* arr2 = nextGreaterElementArr(arr, N);

	std::cout << "\n";
	for (int i = 0; i < N; i++)
	{
		std::cout << arr2[i] << " ";
	}
	
	
	const int N1 = 10;
	int arr1[N1] = { 9, 6 ,38 ,7 ,101, 10 ,65, 5 ,43 ,100 };

	int* arr3 = nextGreaterElementArr(arr1, N1);

	std::cout << "\n";
	for (int i = 0; i < N1; i++)
	{
		std::cout << arr3[i] << " ";
	}



	std::cout << "\n\n\n";
	return 0;
}