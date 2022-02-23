#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,m,a,b;
    cin >> n >> m;
    vector<int> team (n+1,0);
    int ans = 0;
    bool sta = true;
    for (int i=1;i<m+1;i++){
        cin >> a >> b;
        if ((team[a]==0)&&(team[b]==0)&&(i==1)){
            team[a]=1;
            team[b]=2;
        }
        else if ((team[a]==0)&&(team[b]==0)) {ans=i; continue;}
        else if (team[a]==0){
            if (team[b]==1){
                team[a]=2;
            }
            else team[a]=1;
        }
        else if (team[b]==0){
            if(team[a]==1) team[b]=2;
            else team[b]=1;
        }
        else if (team[a] == team[b]) {sta=false; ans=i-1;}
        if(sta) ans=i;
    }
    cout << ans << "\n";
}