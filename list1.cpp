#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> x;
    int n,i;
    char k[5];
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (i=0;i<n;i++){
        cin >> k;
        if (k[0] == 'I'){
            int v;
            cin >> v;
            x.push_front(v);
        }
        else {
            int cou=1,b;
            cin >> b;
            for(auto j = x.begin(); j != x.end() ; j++){
                if (cou == b){
                    x.erase(j);
                    break;
                }
                cou++;
            }
        }
    }
    for (list<int>::iterator p = x.begin() ; p != x.end() ; p++){
        cout << *p << "\n";
    }
}