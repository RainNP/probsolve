#include "probelib.h"
//#include<iostream>

//using namespace std;

int main(){
    int n = probe_init();
    int a,b,c,d;
    a = 0;
    c = n-1;
    b = (a+c)/2;
    d = 22; 
    while(1){
        b = (a+c)/2;
        //cout << a << " " << b << "\n";
        if (probe_check(a,b)){
            if (a == b){
                probe_answer(a);
            }
            c = b;
        }
        else{
            a = b+1;
            b = c;
        }
    }
}