#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> a;
    int n;
    cin >> n;
    char cm[5];
    for (int i=0;i<n;i++){
        cin >> cm;
        if (cm[0] == 'l'){
            if (cm[1] == 'i'){
                int x;
                cin >> x;
                a.push_front(x);
            }
            else{
                auto j = a.begin();
                a.push_back(*j);
                a.pop_front();
            }
        }
        else{
            if (cm[1] == 'i'){
                int y;
                cin >> y;
                a.push_back(y);
            }
            else{
                auto k = a.end();
                k--;
                a.push_front(*k);
                a.pop_back();
            }
        }
    }
    for (auto q = a.begin(); q != a.end() ; q++){
        cout << *q << "\n";
    }
}