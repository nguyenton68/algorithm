#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
  string s="thisiths";
  if(s.length()%2!=0)
    cout<<"Odd number"<<endl;
  int arr[30]={0};

  int count=0;
  int a = (int)'a';
  int z =(int)'z';

  for(int i=0; i<s.length();i++)
    {
      int tmp = ((int)s[i])-a;
      cout<<arr[tmp]<<endl;
      arr[tmp]++;
    }
  for(int j=0;j<30;j++)
    {
      if(arr[j]%2==1)
	cout<<j<<"\t"<<arr[j]<<" Odd number of times"<<endl;
    }
}
