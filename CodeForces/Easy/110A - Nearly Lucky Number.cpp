#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
bool luckyNumber(int number){
    if(number==4 || number==7){
        return true;
    }
    else{
        return false;
    }
}
bool islucky(long long int number){
    int luckyCounter=0;
    while(number){
        if(luckyNumber(number%10)){
            luckyCounter++;
        }
        number=number/10;
    }    
    if(luckyNumber(luckyCounter)){
        return true;
    }
    else {
        return false;
    }
}
int main() {
    long long int number;
    
    cin>>number;

    if(islucky(number)){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}
