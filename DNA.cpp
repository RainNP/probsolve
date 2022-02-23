#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main(){
    int l,n;
    cin >> l;
    cin >> n;
    list<list<int>> x;
    int ans[n];
    int m,o=0;
    for (int i=0;i<l;i++){
        list<int> y;
        if (i==0) y.push_back(-1);
        cin >> m;
        for (int j=1;j<=m;j++){
           y.push_back(o+j);
        }
        o += m;
        x.push_back(y);
    }
    /*for (auto a = x.begin();a!= x.end();a++){
        for (auto b = (*a).begin();b != (*a).end();b++){
            cout << *b << " ";
        }
        cout << "\n";
    }*/
    char cmd[5];
    auto tmp = x.begin();
    list<int> first_list = *tmp;
    auto track = first_list.begin();
    for (int i=0;i<n;i++){
        tmp = x.begin();
        tmp++;
        cin >> cmd;
        if (cmd[0] == 'F'){
            auto check = track;
            check++;
            check++;
            if (check != first_list.end()){
                first_list.erase(track);
                first_list.insert(check,-1);
                track = check;
                track--;
            }
        }
        else if (cmd[0] == 'B'){
            //cout << "g";
            auto check = track;
            if (track != first_list.begin()){
                track--;
                first_list.erase(check);
                first_list.insert(track,-1);
                track--;
            }
        }
        else {
            int f;
            list<int> tt;
            auto check = track;
            check++;
            check++;
            tt.splice(tt.begin(),first_list,check,first_list.end());
            x.push_back(tt);
            cin >> f;
            tmp = x.begin();
            tmp++;
            //find f
            while (tmp != x.end()){
                //cout << "c\n";
                int left = (*tmp).front();
                int right = (*tmp).back();
                if (left == f){
                    first_list.splice(first_list.end(),(*tmp));
                    break;
                }
                else if (right == f){
                    (*tmp).reverse();
                    first_list.splice(first_list.end(),(*tmp));
                    break;
                }
                tmp++;
            }
            check = track;
            track++;
            track++;
            first_list.erase(check);
            first_list.insert(track,-1);
            track--;
        }
        auto fans = track;
        fans++;
        ans[i] = (*fans); 
        /*for (auto mm = first_list.begin();mm != first_list.end();mm++){
            cout << *mm << " ";
        }
        cout << "\n";*/
    }
    for (int i=0;i<n;i++){
        cout << ans[i] << "\n";
    }
}