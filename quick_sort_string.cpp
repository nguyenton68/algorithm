// 06/26/2017 
// NT: Quick Sort using functions. For an character array
// Trick: declare char a[]="cdgf".
// Then in all argument, use char *arr
// 1. splitArray: to find the right index of the first array element in the full array
// Take 4 arguments: the pivot (which is always the 1st element). The start index and the end index.
// 2. quickSort: sort the array, and call itself. Divide the array into left and right.
// Take 3 arguments: the array, start and end index.
#include <iostream>

using namespace std;

int splitArray(char *arr, int , int, int);
void quickSort(char *arr, int , int);
void printArray(char *arr, int, int);
void swap(char *a,char *b);
int main()
{
  char a1[]="ebc";
  char a2[]="ceb";
  int len1 = strlen(a1);
  int len2 = strlen(a2);
  if(len1!=len2)
    cout<<"Two strings are different"<<endl;

  quickSort(a1,0,3);
  quickSort(a2,0,3);
  for(int i=0;i<len1;i++)
    {
      if(a1[i]!=a2[i])
	cout<<"Two strings are different"<<endl;
    }
  cout<<"Two strings are permutation of each other"<<endl;
}
void quickSort(char *array, int StartIndex, int EndIndex)
{
  int pivot = array[StartIndex];
  int split_point;
  if(EndIndex>StartIndex)
    {
      split_point = splitArray(array,pivot,StartIndex, EndIndex);    
      array[split_point] = pivot;
      quickSort(array,StartIndex, split_point-1);
      quickSort(array, split_point+1,EndIndex);
      //      cout<<"Inside quick Sort"<<endl;
      //      printArray(array,StartIndex,EndIndex);
    }
}
int splitArray(char *array, int pivot, int StartIndex, int EndIndex)
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
void swap(char *x, char *y)
{
  char temp = *x;
  *x =*y;
  *y = temp;
}
void printArray(char *array, int StartIndex, int EndIndex)
{
  for(int i=StartIndex; i<=EndIndex; i++)
    {
      cout<<array[i]<<endl;
    }
}
