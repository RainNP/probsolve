#include<iostream>
#include<utility>

using namespace std;

int main(){
    int l,n,i,max = -1,count = 0;
    cin >> l;
    cin >> n;
    pair<int,int> bri[n];
    for (i=0;i<n;i++){
        int a,b;
        cin >> a;
        cin >> b;
        bri[i].first = a;
        bri[i].second = b;
    }
    for (i=0;i<l;i++){
        count = 0;
        float point = i+0.5;
        for (int j=0;j<n;j++){
            if ((point > bri[j].first)&&(point < bri[j].second)){
                count += 1;
            }
        }
        if (count > max) max = count;
    }
    cout << max;
}