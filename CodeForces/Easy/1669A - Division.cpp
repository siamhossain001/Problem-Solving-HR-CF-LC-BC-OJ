#include<iostream>
using namespace std;

int main(){

     int rating,test;
     cin>>test;
     while(test--){
        cin>>rating;
        if(rating<=1399){
             cout<<"Division 4"<<endl;
        } 
        else if(1400<= rating && rating<=1599){
              cout<<"Division 3"<<endl;
        }
        else if(1600<= rating && rating<=1899){
               cout<<"Division 2"<<endl;
        }
        else {
            cout<<"Division 1"<<endl;
         }
     }
    return 0;
}