#include<iostream>
#include<list>

using namespace std;

list<int> x[100010];

int main(){
    int m;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m;
    for (int i=0;i<m;i++){
        char cmd[5];
        cin >> cmd;
        if (cmd[0] == 'N'){
            int j,k;
            cin >> j;
            cin >> k;
            x[k].push_back(j);
        }
        else{
            int o,p;
            cin >> o;
            cin >> p;
            auto tmp = x[p].end();
            x[p].splice(tmp,x[o]);
            x[o].clear();
        }
    }
    for (int i=0;i<100001;i++){
        for (auto q = x[i].begin();q != x[i].end();q++){
            cout << *q << "\n";
        }
    }
}