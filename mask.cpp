#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> number;
    number.push_back(-1);
    int n;
    cin >> n;
    int m1,m2,m3,m4,w1,w2,w3,w4,i;
    m1 = m2 = m3 = m4 = -1;
    for (i = 1;i<(4*n)+1;i++){
        int k;
        cin >> k;
        number.push_back(k);
        if (i <= n) {
            if (k > m1) {
                m1 = k;
                w1 = i;
                }
        }
        else if (i<=2*n){
            if (k > m2) {
                m2 = k;
                w2 = i;
                }
        }
        else if (i<=3*n){
            if (k>m3){
                m3 = k;
                w3 = i;
            }
        }
        else{
            if (k>m4){
                m4 = k;
                w4 = i;
            }
        }
    }
    //จะมี m1 m2 m3 m4 และ w1 w2 w3 w4 อยู่
    // w1 vs w2 and w3 vs w4
    int result[4],t1,t2,l1,l2;
    if (m1>m2){
        result[2] = w2;
        t1 = w1;
        l1 = m1;
    }
    else {
        result[2] = w1;
        t1 = w2;
        l1 = m2;
    }
    if (m3>m4){
        result[3] = w4;
        t2 = w3;
        l2 = m3;
    }
    else {
        result[3] = w3;
        t2 = w4;
        l2 = m4;
    }
    // รอบชิง
    if (l1>l2){
        result[0] = t1;
        result[1] = t2;
    }
    else{
        result[0] = t2;
        result[1] = t1;
    }
    for (i=0;i<4;i++){
        cout << result[i] << " ";
    }
    cout << "\n";
}