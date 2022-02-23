#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,q;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    cin >> q;
    vector<int> ppp;
    vector<pair<int,int>> price;
    vector<int> ans;
    for (int i=1;i<=n;i++){
        int m;
        cin >> m;
        ppp.push_back(m);
        price.push_back(make_pair(m,i));
    }
    sort(price.begin(),price.end());
    for (int i=0;i<q;i++){
        int x,y,xp,aa;
        cin >> x;
        cin >> y;
        xp = ppp[x-1];
        aa = xp+y;
        for (int j=0;j<n;j++){
            if (aa == price[j].first) {ans.push_back(price[j].second); break;}
            else if (aa < price[j].first) {ans.push_back((price[j].second)-1); break;}
        }
    }
    for (int i=0;i<q;i++){
        cout << ans[i] << "\n";
    }
}