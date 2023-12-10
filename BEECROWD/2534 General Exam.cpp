#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
// large to small sort
bool compare(int a,int b){
    return a>b;
}
int main(){
    int N,Q,position;
    while(cin>>N>>Q){
        vector<int> grades(N);
        
        for(int i=0;i<N;i++){
            cin>>grades[i];
        }

        sort(grades.begin(),grades.end(),compare);

        for(int i=0;i<Q;i++){
            cin>>position;
            cout<<grades[position-1]<<endl;
        }    
    }

}