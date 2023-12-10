#include<iostream>
#include<vector>

using namespace std;
bool isLucky(int a,int b){
    if(a==b){
        return true;
    }
    return false;
}
int main(){
    int ticket;

    cin>>ticket;

    string number;
    
    int firstThreedigit=0,lastThreedigit=0;
    while(ticket--){
        
        cin>>number;
        
        for(int i=0;i<number.size();i++){
            if(i<3){
                firstThreedigit += (number[i]-'0');
            }
            else {
                lastThreedigit += (number[i]-'0');
            }
        }

        if(isLucky(firstThreedigit,lastThreedigit)){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

        firstThreedigit = 0;
        lastThreedigit  = 0;
    }

    return 0;
}