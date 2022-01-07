#include<iostream>
using namespace std;

// Selection Sort
void selectionSort(int array[], int n)
{
	int i, min, temp;
	// 6,8,1,4,10,9
	for(i = 0; i < n-1; i++)
	{
		min = i; // min=0 // min=1
		for(int j = i + 1; j < n; j++) // j=1 // j=2 // j=2
		{
			if(array[j] < array[min]) // 8<6 // 1<6 // 6<8
				min = j; // min=2 // min=2
		}

		// Code to Swap the values
		temp = array[i]; // temp=6 // temp=8
		array[i] = array[min]; // array[0]=array[2]==1 // array[1]=6
		array[min] = temp; // array[2]=6 // array[2]=8
		// 1,8,6,4,10,9
		// 1,6,8,4,10,9
	}

	// Displaying Sorted Elements
	for(i = 0; i < n; i++)
		cout<<array[i]<<"\t";
}

int main()
{
	int array[6] = {6,8,1,4,10,9};
	int n;
	n = sizeof(array)/sizeof(array[0]);
	cout<<"Array before sorting :-\n";
	for(int i = 0; i < n; i++)
		cout<<array[i]<<"\t";
	cout<<endl<<endl;
	cout<<"Array elements before Sorting :-\n";
}