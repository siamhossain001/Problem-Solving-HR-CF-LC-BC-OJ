#include <iostream>
#include <cmath>

using namespace std;
int main(){
    
    int a,b,sum,TheSum=0,number;
    a=1;
    b=1;
    cin>>number;

    while(number--){
        TheSum+=a;
        sum = a+b;
        a = b;
        b = sum;
        
    }
    cout<<TheSum<<endl;
    return 0;
}
