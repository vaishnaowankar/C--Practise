#include<bits/stdc++.h>
using namespace std;

void pattern_search(string text , string pat){
  int found = text.find(pat);

  while(found != string::npos){
    //Remember if find function is unable to search the string it returns string::npos.
    cout<<"Pattern found at index: "<<found<<endl;

    found = text.find(pat,found+1);
    // the second argument in the find() is the index from where the search starts.
  }

}

int main(){
  string text , pat;
  cout<<"Enter the text: ";
  cin>>text;
  cout<<"Enter the pattern to be searched: ";
  cin>>pat;

  pattern_search(text,pat);
  return 0;

}
