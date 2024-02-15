#include <iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<string>

using namespace std;

void perfect_permutation(vector<int> &ar){
      int a=1,b,carry=1;

    for(int i=0;i<ar.size();i+=2){
        a = carry*2;
        b = a-1;

        ar[i] = a;   
        ar[i+1] = b;
        
        carry++;
    }
      
}
int main() {
    int n;
    cin>>n;
    
    vector<int> ar(n);

    if(n%2!=0){
        cout<<int(-1)<<endl;
    }
    else {
       perfect_permutation(ar);
       for(int i=0;i<ar.size();i++){
           cout<<ar[i];
           if(i<ar.size()-1){
            cout<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}
