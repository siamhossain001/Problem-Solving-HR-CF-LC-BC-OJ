#include <iostream>
#include <cmath>
using namespace std;
 
 
bool isprime(long long prime){
    int SqureRoot = (sqrt(prime)+1);
    for(int i=2;i<SqureRoot;i++){
        if(prime%i==0){
            return false;
        }
    }
    return true;
}
int main() {
 
    long long int prime;
    int test;
    cin>>test;
    
    while(test--){
        cin>>prime;
        if(isprime(prime)){
            cout<<"Prime"<<endl;
        }
        else {
            cout<<"Not Prime"<<endl;
        }
        
    }
    return 0;
}