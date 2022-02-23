#include<iostream>
#include<list>
#include<fstream>
#include<queue>
#include<vector>

using namespace std;

list<int> x[100002];

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> ans;
    for (int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        x[a].push_back(b);
        x[b].push_back(a);
    }
    vector<int> check (n+1,0);
    vector<int> pp (n+1,0);
    queue<int> q;
    for (int i=1;i<n+1;i++){
        if (check[i]==0){
            q.push(i);
            while(!q.empty()){
                int l = q.front();
                pp[l] = i;
                q.pop();
                auto p = x[l].begin();
                while(p!= x[l].end()){
                    if (check[*p] == 0){
                        q.push(*p);
                        check[*p] = 1;
                        pp[*p] = i;
                    }
                    p++;
                }
            }
        }
    }
    for (int i=0;i<k;i++){
        int a,b;
        cin >> a >> b;
        if (pp[a] == pp[b]) ans.push_back(1);
        else ans.push_back(0);
    }
    for (int i=0;i<k;i++){
        cout << ans[i] << "\n";
    }
}