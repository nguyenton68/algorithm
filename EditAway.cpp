// 06-29-2017
// Edit Away: check whether a string is a replacement/removal/insertion of another string
// Algorithm:
// Base on length to sort cases:
// 1. replacement
// 2. Insert/remove: use while loop and increase indices if s1[indx1]=s2[indx2]
#include <iostream>
#include <string>
using namespace std;
void checkReplace(string s1, string s2);
void checkInsert(string s1, string s2);
int main()
{
  string s1="thisisshit";
  string s2="thisissahip";
  int len1=s1.length();
  int len2=s2.length();
  if(len1==len2)
    checkReplace(s1,s2);
  else if((len1+1)==len2||(len1-1)==len2)
    checkInsert(s1,s2);
  else
    cout<<"Two different strings"<<endl;
    
}

void checkReplace(string s1, string s2)
{
  int count=0;
  for(int i=0; i<s1.length();i++)
    {
      if(s1[i]!=s2[i])
	count++;
    }
  cout<<count<<endl;
  if(count>1)
    cout<<"This is not a replacement"<<endl;
  else
    cout<<"Two strings are replacement"<<endl;
}
void checkInsert(string s1, string s2)
{
  int indx1=0;
  int indx2=0;
  int count=0;
  while(indx1<s1.length()&&indx2<s2.length()) 
    {
      if(s1[indx1]==s2[indx2])
	{
	  if(s1.length()<s2.length())
	    indx2++;
	  else 
	    indx1++;
	}
      else
	{
	  count++;
	  indx1++;
	  indx2++;
	}
    }
  if(count>1)
    cout<<"There are more than 2 characters are different"<<endl;
}
