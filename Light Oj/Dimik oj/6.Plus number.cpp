#include<iostream>
#include<vector>

using namespace std;

int main(){
    int test;
    cin>>test;

    int number;
    vector<int> arr;
    while(test--){
        cin>>number;
        while(number){
            arr.push_back(number%10);
            number = number/10;
        }
        cout<<"Sum = "<<arr[0]+arr[arr.size()-1]<<endl;
        arr.clear();
    }
    return 0;
}