#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main(){
    
    int n,h;
    cin>>n>>h;

    vector<int> person(n);

    for(int i=0;i<n;i++){
        cin>>person[i];
    }

    int validPerson=0;

    for(int i=0;i<n;i++){
        if(person[i]<=h){
            validPerson+=1;
        }
        else{
            validPerson+=2;
        }
    }
    
    cout<<validPerson<<endl;
    return 0;
}