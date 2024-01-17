#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;


int main() {
    
   long long int test,sum,numbers;
    cin>>test;

    while(test--){
         cin>>numbers; 
         sum = ((pow(2,numbers)-1));
         cout<<sum<<endl;
    }
    return 0;
}
