#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<pair<int,int>> x;

int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int s,t;
        cin >> s;
        cin >> t;
        x.push_back(make_pair(t,s));
    }
    sort(x.begin(),x.end());
    int ans = 1;
    auto p = x.begin();
    auto tmp = x.begin();
    tmp++;
    while(1){
        if (tmp == x.end()) break;
        if ((*tmp).first == (*p).first){
            tmp++;
            continue;
        }
        if ((*tmp).second < (*p).second){
            tmp++;
            continue;
        }
        else {
            ans++;
            p = tmp;
            tmp++;
        }
    }
    cout << ans << "\n";
}