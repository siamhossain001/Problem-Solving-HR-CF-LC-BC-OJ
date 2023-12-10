#include<iostream>
using namespace std;

int main(){
     int index;
     string number;
     cin>>number;

     for(int i=0;i<number.size();i+=2){
        index =i;
        for(int j=i+2;j<number.size();j+=2){
            if(number[j]<number[index]){
                index = j;
            }
        }
        swap(number[i],number[index]);
     }
     cout<<number<<endl;
    return 0;
}