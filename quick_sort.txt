#include <iostream>
using namespace std;

int quicksort(int array[], int low, int high)
{
	if (low >= high)
		return 0;

	int mid = (low + high)/2;
	int pivot = array[mid];
	int i = low;
	int j = high;
	int temp;

	while (i <= j)
	{
		while (pivot > array[i])
			i++;

		while (pivot < array[j])
			j--;

		if (i <= j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
		}
	}

	// Calling QuickSort for the first Sub list
	if (low < j)
		quicksort(array, low, j);

	// Calling QuickSort for the second Sub list
	if (i < high)
		quicksort(array, i, high);
}

// main function
int main()
{
	int array[] = {9,3,7,5,6,4,8,2};
	int n;
	n = sizeof(array)/sizeof(array[0]);

	cout<<"Array element before Sorting : \n";
	for (int i = 0; i < n; i++)
		cout<<array[i]<<"\t";
	if (n == 0)
	{
		cout<<"\nThere is nothing to Sort";
		return 0;
	}
	else if (n == 1)
	{
		cout<<"\nSingle Element is already Sorted ";
	}
	else
	{
		// Call to Quick Sort
		quicksort(array, 0, n);
		cout<<"\nArray elements after Sorting : \n";
		for (int i = 0; i < n; i++)
			cout<<array[i]<<"\t";
		return 0;
	}
}