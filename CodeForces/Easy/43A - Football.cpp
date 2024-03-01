#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;
int team_winner(vector<int> &scores){
     int winner = 0;
     int carry = scores[0];
     for(int i=1;i<scores.size();i++){
         if(carry<scores[i]){
             winner = i;
         }
     }
     return winner;
}
void team_counter(vector<string> &teams , string team_Name, vector<int> &scores){
       bool flag = true;
       for(int i=0;i<teams.size();i++){
           if(teams[i]==team_Name){
               flag = false;
               scores[i]++;
           }
       }
       if(flag){
           teams.push_back(team_Name);
       }
}
int main(){
    
    int test;
    cin>>test;
    vector<string> teams;
    vector<int> scores(test,0);

    string team_Name;
    while(test--){
        cin>>team_Name;
        team_counter(teams,team_Name,scores);
    }
    cout<<teams[team_winner(scores)]<<endl;
  
    return 0;
}