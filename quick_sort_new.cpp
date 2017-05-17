// Nguyen 05/2017
// Another method for quick sort
// This one come from Algorithm book
// The different here is choose the pivot to be the last element of the array
// In splitArr: choose index i for subarray smaller than pivot.
// Index j for subarray larger than pivot.
// Caution: swap whenever find a smaller element
// Finally swap the i+1 element with the last element
#include <iostream>
using namespace std;
const int SIZE=5;
int splitArr(int *, int, int);
void printArray(int *arr, int, int);
void swap(int &a, int &b);
void quickSort(int *, int, int);
int main()
{
  int arr[SIZE]={5,9,3,7,1};
  quickSort(arr,0,4);
  printArray(arr,0,4);
}
void quickSort(int *array, int start, int end)
{
  if(start<end)
    {
      int split_point = splitArr(array,start,end);
      quickSort(array,start,split_point-1);//smaller subarray
      quickSort(array,split_point+1,end);// larger subarray
    }

}
int splitArr(int *array, int start, int end)
{
  int x = array[end];
  int i = start -1;
  for(int j = start; j<end; j++)
    {
      if(array[j]<=x)
	{
	  i = i+1;
	  swap(array[i],array[j]);//swap whenever the element is smaller than pivot
	}
    }
  swap(array[i+1],array[end]);//swap to put the pivot at the right location
  return (i+1);
}
void swap(int &x, int &y)
{
  int temp = x;
  x =y;
  y = temp;
}
void printArray(int *array, int StartIndex, int EndIndex)
{
  for(int i=StartIndex; i<=EndIndex; i++)
    {
      cout<<array[i]<<endl;
    }
}
