#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int N;
    int counter=1;
    vector<int> number(1000);
    
    for(int i=0;i<1000;){
        if(counter%3!=0 && counter%10!=3){
            number[i]=counter;
            i++;
        }
        counter++;
    }
    int test;
    cin>>test;

    while(test--){
        int input;
        cin>>input;
        cout<<number[input-1]<<endl;
    }
 
    return 0;
}
/*
   #include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int k;
		cin >> k;

		for (int i = 1; ; i++)
		{
			if (i % 3 == 0 || i % 10 == 3)
				continue;
			if (--k == 0)
			{
				cout << i << '\n';
				break;
			}
		}
	}
}
*/
