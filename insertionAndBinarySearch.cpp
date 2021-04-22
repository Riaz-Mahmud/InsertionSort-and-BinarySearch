// C++ program for insertion sort
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int value)
{
    int first = 0,last = n - 1, middle;

    while ( first <= last )
        {
            middle = (first + last) / 2;
            if (arr[middle] == value)
            {
                return middle;

            }
            else if (arr[middle] > value)
            {
                last = middle - 1;
            }
            else
            {
                first = middle + 1;
            }
        }

        return -1;
}

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int value, arrSize,searchValue;

	cout<<"Enter Array size: ";
	cin>>arrSize;
	int arr[arrSize] = { };

	cout<<"Enter Array Value: "<<endl;
	for(int i=0; i<arrSize; i++){
        cin>>value;
        arr[i]=value;
	}

	int n = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, n);

	cout<<"Sorted Array: "<<endl;
	printArray(arr, n);
	cout<<"Enter Search value: ";
	cin>>searchValue;

	int getValue = binarySearch(arr,n,searchValue);

	if(getValue == -1){
        cout<<"Not found"<<endl;
	}else{
	    cout<<"Found"<<endl;
	}



	return 0;
}

