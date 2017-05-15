// Nguyen
// Heapsort
// Input: array
// Output: sorted array
// Caution:
// recursive call max_heap
// Only need to loop n/2 time for each time call max_heap inside heapsort
#include <iostream>
using namespace std;
const int SIZE=10;
void max_heap(int *, int, int);
void swap(int *, int, int);
void printArr(int *, int, int);
void heapsort(int *, int);
int main()
{
  int Arr[SIZE]={7,3,5,1,9,57,6,32,79,3};
  heapsort(Arr,SIZE);
  printArr(Arr,0,SIZE-1);
}

void max_heap(int * arr, int start, int arr_len)
{
  int left = 2*start + 1;
  int right = 2*start +2;
  int largest=0;
  if(left<arr_len&&arr[start]<arr[left])
    largest = left;
  else
    largest = start;

  if(right<arr_len&&arr[largest]<arr[right])
    largest = right;

  if(largest!=start)
    {
      swap(arr[start],arr[largest]);
      max_heap(arr,largest,arr_len);
    }
}

void swap(int *arr, int x, int y)
{
  int temp = x;
  x = y;
  y = temp;
}
void printArr(int * arr, int start, int end)
{
  for(int i =0; i<=end;i++)
    {
      cout<<arr[i]<<endl;
    }
}
void heapsort(int *arr, int length)
{
  for(int i=int(length/2);i>=0;i--)
    {
      max_heap(arr,i,length);
    }
  for(int i=(length-1);i>=0;i--)
    {
      swap(arr[0],arr[i]);
      max_heap(arr,0,i);
      //      printArr(arr,0,length-1);
    }
}
