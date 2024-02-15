#include <iostream>

using namespace std;

int main() {
    
    long long int number;
    cin>>number;

    if(number%2!=0){
        cout<<-((number+1)/2)<<endl;
    }
    else {
       cout<<(number+1)/2<<endl;
    }
    return 0;
}
