#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str1 ="this is Nguyen";
  int length = str1.length();
  int count_space=0;
  for(int i=0;i<length;i++)
    {
      if(str1[i]==' ') count_space++;
    }
  cout<<"There are "<<count_space<<" space."<<endl;
  int totalLen = length+2*count_space;
  char FinalString[totalLen];
  int space=0;
  for(int j=0; j<length; j++)
    {
      FinalString[j+space*2]=str1[j];
      if(str1[j]==' ')
	{
	  FinalString[j+space*2]='%';
	  FinalString[j+1+space*2]='2';
	  FinalString[j+2+space*2]='0';
	  space++;
	}
    }
  FinalString[totalLen]='\0';
  cout<<FinalString<<endl;
}
