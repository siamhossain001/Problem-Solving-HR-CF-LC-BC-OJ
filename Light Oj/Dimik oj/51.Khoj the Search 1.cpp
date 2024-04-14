#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string s1,s2;
    int test,index;
    int i=0,j=0;

    cin>>test;
    while(test--){
        cin>>s1>>s2;
       while(i<s1.size() && j<s2.size()){
           if(s1[i]==s2[j]){
               if(j==0){
                  index = i;
                  j++;
               }
               else {
                  j++;
               }
           }
           else {
               j=0;
           }
           i++;
       }
       cout<<index<<endl;
       j=0;
       i=0;
    }
    return 0;
}