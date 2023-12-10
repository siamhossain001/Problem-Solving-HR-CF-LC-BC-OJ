#include <iostream>
#include<string>
 
using namespace std;
string reverseString(string& str){
  string reverse = str;
  int Size = str.size();
  for(int i=0;i<Size/2;i++){
    swap(reverse[i],reverse[Size-i-1]);
  }
  return reverse;
}

int main() {
  
  string input;
  int a;
  cin>>a;

  cin.ignore();

  while(a--){
    getline(cin,input);
    //step 1
    for(int i=0;i<input.size();i++){
       if(input[i]>='A' && input[i]<='Z' || input[i]>='a' && input[i]<='z'){
            input[i]+=2;
       } 
    }
    //step 2
    input = reverseString(input);
    
    //step 3
    int b = input.size();
    b/=2;

    for(int i=0;i<b;i++){
      if(input[i]>='A' && input[i]<='Z' || input[i]>='a' && input[i]<='z'){
        input[i]+=1;
      }
    }

    cout<<input<<endl;
  }
  return 0;
}