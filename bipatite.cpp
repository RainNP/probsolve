#include<iostream>
#include<list>
#include<queue>
#include<vector>

using namespace std;

list<int> x[100010];

int main(){
    int k,n,m,u,v;
    cin >> k;
    vector<int> ans;
    for (int i=0;i<k;i++){
        cin >> n >> m;
        for (int c=0;c<n;c++){
            x[c].clear();
        }
        for (int j=0;j<m;j++){
            cin >> u >> v;
            x[u].push_back(v);
            x[v].push_back(u);
        }
        vector<int> side(n+1,-1);
        side[1] = 1;
        queue<int> q;
        q.push(1);
        //vector<int> check(n+1,0);
        int sta=1;
        int aaa = 1;
        while((!q.empty())&&(aaa==1)){
            int l = q.front();
            sta = side[l];
            q.pop();
            auto p = x[l].begin();
            while(p!= x[l].end()){
                if(side[*p] == -1){
                    if (sta == 1) side[*p] = 2;
                    else side[*p] = 1;
                    q.push(*p);
                }
                if(side[*p] == sta) {aaa=0; break;}
                p++;
            }
        }
        if (aaa==1){ans.push_back(1);}
        else ans.push_back(0);
    }
    auto b = ans.begin();
    while(b!=ans.end()){
        if ((*b) == 1){cout << "Yes\n";}
        else cout << "No\n";
        b++;
    }
}