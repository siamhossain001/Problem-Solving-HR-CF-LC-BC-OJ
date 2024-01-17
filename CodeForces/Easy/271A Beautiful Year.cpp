#include<iostream>
#include<vector>
using namespace std;


int main(){
    
    int year;
    int arr[4];
    cin>>year;
    //part 1
    year++;
    arr[0] = year/1000;
    arr[1] = (year%1000)/100;
    arr[2] = (year%100)/10;
    arr[3] = year%10;

    while(arr[0]==arr[1] || arr[0]==arr[2] || arr[0]==arr[3] || arr[1]==arr[2] || arr[1]==arr[3] || arr[2]==arr[3]){
        year++;
        arr[0] = year/1000;
        arr[1] = (year%1000)/100;
        arr[2] = (year%100)/10;
        arr[3] = year%10;
    }
    cout<<year<<endl;
    return 0;
}