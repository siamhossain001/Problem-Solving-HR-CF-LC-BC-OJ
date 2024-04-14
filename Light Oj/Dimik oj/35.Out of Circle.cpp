#include <bits/stdc++.h>
using namespace std;
bool isinside(int x1,int x2,int y1,int y2,int r){
    double d;
    int carry = pow((x2-x1),2) + pow((y2-y1),2);
    d = sqrt(carry);
    if(d>r){
        return false;
    }
    else {
        return true;
    }
}
int main() {
    int x1,x2,y1,y2;
    int r;
    int test;
    
    cin>>test;
    while(test--){
        cin>>x1>>y1>>r>>x2>>y2;
        if(isinside(x1,x2,y1,y2,r)){
            cout<<"The point is inside the circle"<<endl;
        }
        else {
            cout<<"The point is not inside the circle"<<endl;
        }
    }
    return 0;
}
