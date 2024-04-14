#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
bool isguy(vector<int> &X,vector<int> &Y,int n){
    vector<bool> V(n,false);
    int i=0,j=0;
    
    while(i<X.size()){
        V[X[i]-1]=true;
        i++;
    }
    while(j<Y.size()){
        V[Y[j]-1] = true;
        j++;
    }
    
    for(int i=0;i<n; i++){
        if(V[i]==false){
            return false;
        }
    }
    return true;

}
int main() {
    int n;
    cin>>n;

    int p,q;

    cin>>p;
    vector<int> X(p);
    for(int i=0;i<p;i++){
        cin>>X[i];
    }

    cin>>q;
    vector<int> Y(q);
    for(int i=0;i<q;i++){
        cin>>Y[i];
    }

    if(isguy(X,Y,n)){
        cout<<"I become the guy."<<endl;
    }
    else {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}