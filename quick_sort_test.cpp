// 05/07/2017 
// NT: Quick Sort using functions
// 1. splitArray: to find the right index of the first array element in the full array
// Take 4 arguments: the pivot (which is always the 1st element). The start index and the end index.
// 2. quickSort: sort the array, and call itself. Divide the array into left and right.
// Take 3 arguments: the array, start and end index.
#include <iostream>

using namespace std;
const int DIM=5;
int splitArray(int *arr, int , int, int);
void quickSort(int *arr, int , int);
void printArray(int *arr, int, int);
void swap(int &a, int &b);
int main()
{
  int Array[DIM]={5,9,1,4,8};
  quickSort(Array,0,4);

  //printArray(Array,0,4);
}
void quickSort(int *array, int StartIndex, int EndIndex)
{
  int pivot = array[StartIndex];
  int split_point;
  if(EndIndex>StartIndex)
    {
      split_point = splitArray(array,pivot,StartIndex, EndIndex);    
      array[split_point] = pivot;
      quickSort(array,StartIndex, split_point-1);
      quickSort(array, split_point+1,EndIndex);
      cout<<"Inside quick Sort"<<endl;
      printArray(array,StartIndex,EndIndex);
    }
}
int splitArray(int *array, int pivot, int StartIndex, int EndIndex)
{
  pivot =array[StartIndex];
  int leftBound = StartIndex;
  int rightBound = EndIndex;
  while(rightBound>leftBound)
    {
      while(pivot<array[rightBound]&& leftBound<rightBound)
	{
	  rightBound--;
	  //cout<<"right= "<<rightBound<<endl;
	}
      swap(array[rightBound],array[leftBound]);
      while(pivot>=array[leftBound]&&leftBound<rightBound)
	{
	  leftBound++;
	  //cout<<"left= "<<leftBound<<endl;
	}
      swap(array[rightBound],array[leftBound]);
    }
  return leftBound;
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
