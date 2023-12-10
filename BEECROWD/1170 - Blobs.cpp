#include <iostream>
 
using namespace std;
 
int main() {
    
    float day;
    int test,counter=0;
    cin>>test;
    
    while(test--){
        cin>>day;
        while(day>1.00){
            day=day/2.00;
            counter++;
        }
        cout<<counter<<" dias"<<endl;
        counter=0;
    }
    return 0;
}