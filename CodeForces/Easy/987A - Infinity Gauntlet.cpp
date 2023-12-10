#include <iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;
int main(){
     string input;
     string stonePower[]= {"Power","Time","Space","Soul","Reality","Mind"};
     map<string,int> colour;
     //key               element
     colour["purple"]   = 0;
     colour["green"]    = 1;
     colour["blue"]     = 2;
     colour["orange"]   = 3;
     colour["red"]      = 4;
     colour["yellow"]   = 5;
     int test;

     cin>>test;
     while(test--){
          cin>>input;
          colour[input] = -1;
     }
     map<string,int> :: iterator it;
     int carry,count = 0;
    for(it = colour.begin(); it!=colour.end(); it++){
        if((*it).second!=-1){
            count++;
        }
    }
    cout<<count<<endl;
    for(it = colour.begin(); it!=colour.end(); it++){
        if((*it).second!=-1){
            cout<<stonePower[(*it).second]<<endl;
        }
    }
     
     return 0;
}