#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>

using namespace std;

int main(){
    int n;
    long long ans=0,a,b,p;
    vector<long long> price;
    cin >> n;
    cin >> a;
    cin >> b;
    price.push_back(-1);
    for (int i=0;i<n;i++){
        cin >> p;
        price.push_back(p);
    }
    int jj=n,i=1,ii=2;
    sort(price.begin(),price.end());
    while(1){
        if (i>=jj) break;
        int tmp = ii-1;
        if ((price[tmp]+price[i]>=a)&&(tmp>i)){
            auto ccc = lower_bound(price.begin(),price.end(),price[ii]);
            tmp = ccc-price.begin();
            tmp--;
            ii = tmp;
            continue;
        }
        if (ii==i) {ii+=1; continue;}
        if (((price[i]+price[jj]>=a)&&(price[i]+price[jj]<=b))&&((price[i]+price[ii]>=a)&&(price[i]+price[ii]<=b))){
            //printf("i=%d ii=%d jj=%d +=%d\n",i,ii,jj,(jj-ii)+1);
            ans += (jj-ii)+1;
            i++;
            continue;
        }
        if (price[i]+price[ii]<a){
            auto bbb = upper_bound(price.begin(),price.end(),price[ii]);
            ii = bbb-price.begin();
        }
        if (price[i]+price[jj] > b){
            auto aaa = lower_bound(price.begin(),price.end(),price[jj]);
            jj = aaa-price.begin();
            jj--;
        }
    }
    cout << ans ;
}