//Ladder11--:>k-string ( haggu's Code)

#include<bits/stdc++.h>
using namespace std;

int main()
{
 int k;
 cin>>k;
 int temp=k;
 string str;
 cin>>str;
 int arr[26];
 for(int i=0;i<26;i++)
  arr[i]=0;
 for(int i=0;i<str.length();i++)
  arr[str[i]-'a']++;
 int flag=0;
 for(int i=0;i<26;i++)
  if(arr[i]!=0)
   if(arr[i]%k!=0)
    flag=1;
 if(flag==1)
  cout<<-1;
 else
 {
  while(temp!=0)
  {
   for(int i=0;i<26;i++)
    if(arr[i]!=0)
     for(int j=0;j<(arr[i])/k;j++)
      cout<<char('a'+i);
    temp--;
  }
 }  
 return 0;
}