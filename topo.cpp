#include <iostream>
#include <list>
#include <iterator>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int N,x,c=0,a=1;
    cin >> N;
    int r = N+1;
    int count[r]; 
    //input
    for (int i =0;i<r;i++){
        count[i] = 0 ;
    }
    for(int i =0;i<N;i++){
        cin >> x;
        c = x-(a) ;
        if(c > 0 ){
            count[i] = c;
        }
        else if(c<0){
            c = c+N;
            count[i] = c;
        }
        a++;
    }
    int arr[r] ;
    for (int i =0;i<r;i++){
        arr[i] = 0 ;
    }
    // for(int i =0 ;i<N;i++){
    //    cout << count[i] << endl;
    // }
    for (int i =0;i<r;i++){
        arr[count[i]] += 1;
    }
    int max=0;
    for (int i =0;i<N;i++){
        if(count[i] >= max){
            max = arr[i]; 
        }
    }
    cout << max << '\n'; 
    return 1;
}