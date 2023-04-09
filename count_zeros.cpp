#include<iostream>
using namespace std;
int countZeros(int arr[], int arrLength)
{
	int count = 0;
	for(int i=0; i<arrLength; i++)
	{
		if(arr[i]==0)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int arr[] = { 1, 50, 0, 1, 1, 0, 0, 0, 5, 0, 3};
	int arrLength = sizeof(arr) / sizeof(int);
	cout<<"Count of zero is:"<<countZeros(arr, arrLength)<<endl;
	return 0;
}
