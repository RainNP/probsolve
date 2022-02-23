#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,m;
    bool sta = true;
    cin >> n;
    vector<bool> ss (3010,false);
    while(1){
        cin >> m;
        if(m == 0) break;
        ss[m] = true;
    }
    for (int i=2559;i<n+1;i++){
        if (!(ss[i])){
            sta = !sta;
        }
    }
    if (sta) cout << "K" << "\n";
    else cout << "C" << "\n";
}