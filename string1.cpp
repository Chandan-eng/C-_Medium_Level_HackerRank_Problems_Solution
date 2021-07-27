# C-_Medium_Level_HackerRank_Problems_Solution
//C++ Medium Level HackerRank Problems Solution Available Here

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string s1,s2;
  char c;
  cin>>s1;
  cin>>s2;
  cout<<s1.size()<<" "<<s2.size()<<endl;
  cout<<s1+s2<<endl;
  c=s1[0];
  s1[0]=s2[0];
  s2[0]=c;
  cout<<s1<<" "<<s2;
    return 0;
}

