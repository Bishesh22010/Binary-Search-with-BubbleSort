//A program to implement binary search without recursion on Integer Data. Sort the data using bubble sort.
#include <iostream>
using namespace std;
int binarySearch(int array[], int key, int low, int high) 
{
  while (low <= high) 
  {
    int mid = low + (high - low) / 2;
    if (array[mid] == key)
      return mid;
    if (array[mid] < key)
      low = mid + 1;
    else
      high = mid - 1;
  }
}

void bubbleSort(int array[], int n)
{
	for (int i = 0; i < n-1; i++) 
	{
		for (int j = 0; j < n-i-1; j++) 
		{
			if (array[j] > array[j+1]) 
			{
				swap(array[j], array[j + 1]);
			}
		}
	}
}
void display(int arr[], int s)
{
	for (int i = 0; i < s; i++)
		cout<<" "<< arr[i];
}
int main()
{
	int s,i;
	cout<<"Enter the Size of the array:";
	cin>>s;
	int array[s];
	cout<<"Enter the Elements in the array :";
	for(i=0;i<s;i++)
	{
		cin>>array[i];
	}
	int k = sizeof(array) / sizeof(array[0]);
	cout<<"The value of (sizeof)"<<k<<endl;
	int key;
	cout<<"Enter the value of key from upper added elements:";
	cin>>key;
	int result = binarySearch(array, key, 0, k-1);
	if (result == -1)
	{
		cout<<"Not found";
	}
	else
	{
		cout<<"Element found at index"<<result;
	}
	bubbleSort(array,k);
	cout<<endl;
	cout<<"The Sorted array is :";
	display(array,k);
}
