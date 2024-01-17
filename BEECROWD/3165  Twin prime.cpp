#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

bool isprime(int number){
    int limit = sqrt(number)+1;
    for(int i=2;i<=limit;i++){
        if(number%i==0){
            return false;
        }
    }
    return true;
}
int main() {
    int numbers;
    cin>>numbers;

    int a=0,b=0;
    while(a==0 || b==0){
        if(isprime(numbers)){
            if(b==0){
                b = numbers;
            }
            else {
                a = numbers;
                if(abs(b-a)!=2){
                    b = a;
                    a = 0;
                }
            }        
        }
        numbers--;

    }
    cout<<a<<" "<<b<<endl;
    return 0;
}