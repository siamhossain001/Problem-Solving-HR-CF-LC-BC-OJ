#include<iostream>
#include<vector>

using namespace std;


int main(){
 
   int N;
   cin>>N;

   int matrix[N][N];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
           cin>>matrix[i][j];
        }
    }
    int carry = N, e = (N-1)/2;
    int a = 0 , b = 0 , c = 0, d = (N-1);
    long long int sum = 0;
    
    // part 1
    while(carry--){
        sum+=matrix[a][b];  
        sum+=matrix[c][d];
        sum+=matrix[e][a];
        sum+=matrix[a][e];
        a++;
        b++;
        c++;
        d--;
    }
    carry = (matrix[(N-1)/2][(N-1)/2])*3;
    sum = sum - carry;
    cout<<sum<<endl;
    

    return 0;
}