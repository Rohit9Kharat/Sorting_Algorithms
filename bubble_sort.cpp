#include <iostream>
using namespace std;

// Function to Implement Bubble Sort
void bubblesort(int arr[], int n)
{
	int i, j, temp, flag = 0;
	for (i = 0; i < n-1; i++) // Loop for passes
	{
		for (j = 0; j < n-i-1; j++) // Loop for steps inside each pass
		{
			// Code for Swapping
			if (arr[j] > arr[j+1])
			{
				temp[j] = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
	// Printing Sorted Array
	cout <<"\nSorted Array Elements are:-\n";
	for (i = 0; i < n; i++)
		cout <<arr[i]<<"\t";
}

int main()
{
	// First way to Input Array Element
/*  int i;
	int arr[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr)/sizeof(arr[0]); */ // integer stores 4 bytes; (4*7)/4 = 7

	// Alterate way to Input Array
	int arr[20], n, i;
	cout <<"Enter the total elements in Array :-";
	cin >> n;
	cout <<"Array Elements are :-";
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout <<"\nArray elements before sorting :-";
	for (i = 0; i < n; i++)
		cout <<arr[i]<<"\t";

	// Calling of Bubble sort function

	bubblesort(arr, n);
	return 0;
}