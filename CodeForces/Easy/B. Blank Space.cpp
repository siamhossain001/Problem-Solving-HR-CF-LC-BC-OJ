#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    
    int test;
    cin>>test;
    
    int a,max,counter;
    while(test--){
        cin>>a;

        max = 0;
        counter = 0;

        vector<int> arr(a);
        
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        
        for(int i=0;i<a;i++){
            if(arr[i]==0){
                counter++;
            }
            else {
                if(max<counter){
                    max = counter;
                }
                counter=0;
            }
        }
        if(counter>max){
            cout<<counter<<endl;
        }
        else{
         cout<<max<<endl;
        }
    }
    return 0;
}
