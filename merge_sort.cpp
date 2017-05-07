// Nguyen Ton
// Purpose: sort an array in ascend order using merge sort algorithm
// mregeSort call itself until there is 1 element in the array
// merge will merge 2 sorted arrays by comparing each element of the subarray, then put the small one into the main array

// Warning!
// Indices should be careful.
// When merge 2 arrays should pay attention on the start index of the main array
#include <iostream>
using namespace std;
const int DIM=10;
void printArray(int *, int , int);
void merge(int *, int, int , int);
void mergeSort(int *, int, int);
int main()
{
  int A[DIM]={4,9,2,6,0,4,1,7,5,2};
  cout<<"Initial array =";
  for(int l=0;l<DIM;l++) cout<<"\t"<<A[l];
  cout<<endl;
  mergeSort(A,0,DIM-1);
  printArray(A,0,DIM-1);
}
void mergeSort(int *array, int start_indx, int end_indxx)
{
  if(start_indx<end_indxx)
    {
      int mid_point = int((end_indxx+start_indx)/2);
      mergeSort(array,start_indx,mid_point);
      mergeSort(array,mid_point+1,end_indxx);
      merge(array,start_indx,mid_point,end_indxx);
    }
}
void merge(int *array, int start, int mid, int end)
{
  int num_left = mid-start+1;
  int num_right = end-mid;
  int arrayL[num_left+1];//include the last element, 99999
  int arrayR[num_right+1];
  // Fill in Left and Right array
  for(int i=0;i<num_left;i++)
    arrayL[i]=array[start+i];
  for(int j=0;j<num_right;j++)
    arrayR[j] = array[mid+j+1];
  // put a large value for the last array element
  arrayL[num_left] = 99999;
  arrayR[num_right] = 99999;
  int left_indx=0;
  int right_indx=0;
  // Index for main array should start from start (the value that the mergeSort has). For example mergeSort(A,3,3,4)
  for(int k=start; k<=end;k++)
    {
      if(arrayL[left_indx]<arrayR[right_indx])
	{
	  array[k] = arrayL[left_indx];
	  left_indx++;
	}
      else
	{
	  array[k] = arrayR[right_indx];
	  right_indx++;
	}
    }

}
void printArray(int *array, int start, int end)
{
  for(int ii=0;ii<=end;ii++)
    {
      cout<<array[ii]<<endl;
    }
}
