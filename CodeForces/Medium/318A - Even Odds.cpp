#include <iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<string>

using namespace std;


int main() {
    
  long long int n,possition,value;
   cin>>n>>possition;
   
   if(n%2==0){
       n = n/2;
   }
   else{
       n = (n+1)/2;
   }

    // if possition is odd
    if(possition<=n){
        value = (possition*2)-1;
    }
    //if possition is even
    else {
        value = (possition-n)*2;
    }
    
    cout<<value<<endl;
    return 0;
}
