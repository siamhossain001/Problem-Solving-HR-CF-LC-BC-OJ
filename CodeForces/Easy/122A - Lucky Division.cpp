#include <iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<string>

using namespace std;

bool islucky(int number){
    if(number%7==0 || number%77==0 || number%777==0 || number%4==0 || number%44==0 || number%444==0 || number%477==0 || number%474==0 || number%747==0 || number%774==0 || number%744==0 || number%47==0){
        return true;
    }
    else {
        return false;
    }
}

int main() {
    
    int number;
    cin>>number;
    if(islucky(number)){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}
