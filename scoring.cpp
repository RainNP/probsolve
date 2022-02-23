#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> send_count (n+1,0);
    vector<int> score (n+1,0);
    for (int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        send_count[a] +=1;
        if (send_count[a] > 5){
            score[a] = 0;
        }
        else {
            if (score[a] < b) score[a] = b;
        }
    }
    int total = 0;
    for (int i=1;i<n+1;i++){
        total += score[i];
    }
    cout << total << "\n";
}
