/* in this proble find how much time people spend up and down */
#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    
    int A1,A2,A3;
    int floor1,floor2,floor3;
    int Min;
    cin>>A1>>A2>>A3;
    
    floor1 = (A2*2) + (A3*4);
    floor2 = (A1*2) + (A3*2);
    floor3 = (A1*4) + (A2*2);
     
    Min = min({floor1,floor2,floor3});
    cout<<Min<<endl;
    
    return 0;
}