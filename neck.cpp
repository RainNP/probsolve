#include<iostream>
#include<list>
#include<vector>

using namespace std;

int main(){
    int n;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    list<int> x[n+1];
    int indexx[n+1];
    for (int i=1;i<n+1;i++){
        x[i].push_back(i);
        indexx[i] = i;
    }
    for (int i=0;i<n-1;i++){
        int y,z;
        cin >> y;
        cin >> z;
        //find y;
        int inY = indexx[y];
        auto fy = x[indexx[y]].begin();
        auto fz = x[indexx[z]].begin();
        for(fz = x[indexx[z]].begin();fz != x[indexx[z]].end();fz++){
            if ((*fz) == z) {break;}
        }
        fz++; 
        for (fy = x[inY].begin();fy != x[inY].end();fy++){
            indexx[(*fy)] = indexx[z];
        }
        x[indexx[z]].splice(fz,x[inY]);
    }
    for (auto tmp = x[indexx[1]].begin();tmp!=x[indexx[1]].end();tmp++){
        cout << *tmp << " ";
    }
}