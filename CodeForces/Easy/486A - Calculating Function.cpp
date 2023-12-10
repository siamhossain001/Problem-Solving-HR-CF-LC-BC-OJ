#include <iostream>
#include <algorithm>
#include <vector> 
#include <cmath>
using namespace std;


int main() {
    long long int sum,number;
    cin>>number;
     
    sum = 0;
    if(number%2==0){
        sum = number/2;
    }
    else {
        sum = (number-1)/2-number;
    }
    cout<<sum<<endl;

    return 0;
}
