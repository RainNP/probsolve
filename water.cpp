#include<iostream>

using namespace std;

int main(){
    int n,ytd=0,td,total=0;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> td;
        if (ytd-td > 10){
            int power;
            power = (ytd-td)*10;
            if (power>700){
                total+=700;
            }
            else total+=power;
        }
        ytd = td;
    }
    cout << total << "\n";
}
