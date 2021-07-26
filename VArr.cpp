# C-_Medium_Level_HackerRank_Problems_Solution
//C++ Medium Level HackerRank Problems Solution Available Here

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
int n,q;
cin>>n>>q;
int** se=new int* [n];
for(int i=0;i<n;i++)
    {
      int a;
      cin>>a;
      int* b=new int [a];
      for(int j=0;j<a;j++)
        {
          int e;
          cin>>e;
          b[j]=e;
        }
    *(se+i)=b;
   }

  for(int i=0;i<q;i++)
  {
  int r,s;
  cin>>r>>s;
  cout<<se[r][s]<<endl;
  }
}

