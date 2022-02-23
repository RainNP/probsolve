#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

int main(){
    int n,j,a,b;
    cin >> n;
    vector<int> day(n+1,0);
    for(int i=1;i<n+1;i++){
        cin >> j;
        for (int k=0;k<j;k++){
            cin >> a >> b;
            for (int d=0;d<b;d++){
                if((i+d)<= n) day[i+d] += a;
            }
        }
    }
    for (int i=1;i<n+1;i++){
        cout << day[i] << "\n";
    }
}