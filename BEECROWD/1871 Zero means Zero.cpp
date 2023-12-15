#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
 
void add(int a,int b, vector<int> &NonZero){
    int sum = a+b;
    while(sum){
        if(sum%10!=0){
            NonZero.push_back(sum%10);
        }
        sum = sum/10;
    }
}
int insertValue(vector<int> &NonZero){
    int sum = 0;
    for(int i=NonZero.size()-1;i>=0;i--){
        sum = sum*10+NonZero[i];
    }
    return sum;
}
int main() {
    
    vector<int> NonZero;
    int a,b,sum;
    while(cin>>a>>b){
        if(a==0 && b==0){
            break;
        }
        else {
            NonZero.clear();
            add(a,b,NonZero);
            sum = insertValue(NonZero);
            cout<<sum<<endl;
        }

    }  

    return 0;
}