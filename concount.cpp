#include<iostream>
#include<list>
#include<fstream>
#include<queue>

using namespace std;

list<int> x[100002];

int main(){
    int n,m;
    //ifstream input_data;
    //input_data.open("conncount_input-3.txt");
    //input_data >> n >> m;
    cin >> n >> m;
    //cout << n <<" " << m;
    for (int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        x[a].push_back(b);
        x[b].push_back(a);
    }
    int check[n+1];
    for (int i=0;i<n+1;i++){
        check[i] = 0;
    }
    int count = 0;
    //bfs
    queue<int> q;
    for (int i=1;i<n+1;i++){
        if (check[i]==0){
            q.push(i);
            while(!q.empty()){
                int l = q.front();
                q.pop();
                auto p = x[l].begin();
                while(p!= x[l].end()){
                    if (check[*p] == 0){
                        q.push(*p);
                        check[*p] = 1;
                    }
                    p++;
                }
            }
            count+=1;
        }
    }
    cout << count << "\n";
}