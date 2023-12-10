#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
 
int main() {

    int n,sum,carry;
    cin>>n;

    int matrix[n][n];
    sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    
    //first and secound diagonal
    int x1=0,y1=0,x2=0,y2=(n-1);
    while(x1<n && y1<n){
         sum+=matrix[x1][y1];
         x1++,y1++;
         sum+=matrix[x2][y2];
         x2++,y2--;
    }

    //middle row  and column
    x1 = (n-1)/2;
    y1 = 0;
    x2 = 0;
    y2 = (n-1)/2;

    while(y1<n && x2<n){
        sum+=matrix[x1][y1];
        y1++;
        sum+=matrix[x2][y2];
        x2++;
    }
    carry = (matrix[(n-1)/2][(n-1)/2])*3;
    sum = sum-carry;

    cout<<sum<<endl;
    return 0;
}