#include <iostream>
#include <vector>

using namespace std;

bool iscolour(vector<vector<char>> &brain , int pos1,int pos2){
     int a=0,b=0,c=0;  // a = c   b = m c = y
    for(int i=0;i<pos1;i++){
         for(int j=0;j<pos2;j++){
            if(brain[i][j]=='C'){
                a++;
            }
            else if(brain[i][j]=='M'){
                b++;
            }
            else if(brain[i][j]=='Y'){
                c++;
            }
         }
    }  
    if(a==0 && b==0 && c==0){
         return false;
    }
    else {
        return true;
    }

}
int main() {
    int a,b;
    cin>>a>>b;

    vector<vector<char>> brain(a,vector<char>(b));
    
    for(int i=0;i<a;i++){
         for(int j=0;j<b;j++){
            cin>>brain[i][j];
         }
    }
     
    if(iscolour(brain,a,b)){
        cout<<"#Color"<<endl;
    }
    else {
        cout<<"#Black&White"<<endl;
    }
}