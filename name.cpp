#include<iostream>
#include<cstdio>
#include<string>
#include<vector>

using namespace std;

int main(){
    char n;
    vector<char> name;
    while(1){
        scanf("%c",&n);
        if (n == '\n') break;
        name.push_back(n);
    }
    auto  p = name.begin();
    auto en = name.end();
    en--;
    char a;
    int ans = 0;
    while(1){
        scanf("%c",&a);
        if(a == '\n') break;
        if (a == *p){
            p++;
        }
        if (p == en){
            ans += 1;
            p = name.begin();
        }
    }
    printf("%d",ans);
}