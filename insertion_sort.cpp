#include <iostream>
using namespace std;

// Insertion Function
void insertionSort(int array[], int n)
{
	// 6,8,1,4,10,9 // 6, ,8,4,10,9 // ..,6,8,4,10,9
	int temp, i, loc;

	//inserting element at required location
	for(i = 0; i < n; i++) 
	{
		temp = array[i]; // temp=6 // temp=8 // temp=1
		loc = i - 1; // loc=-1 // loc=0 // loc=1
		while(loc >= 0 && array[loc] > temp) // 8>1 // 6>1
		{
			array[loc + 1] = array[loc]; // array[2]=8 // array[1]=6
			loc = loc - 1; // loc=0 // loc=-1
		}
			array[loc + 1] = temp; // array[0]=1
	}
	cout<<"Sorted Array Elements are :-\n";
	for(int i = 0; i < n; i++)
	{
		cout<<array[i]<<"\t";
	}
}

// main function
int main()
{
	int array[] = {6,8,1,4,10,9};
	int n = sizeof(array)/sizeof(array[0]);
	cout<<"Array Elements before Sorting :-\n";
	for(int i = 0; i < n; i++)
		cout<<array[i]<<"\t";
	cout<<endl;

	// calling Insert Sort Function
	insertionSort(array, n);
	return 0;
}