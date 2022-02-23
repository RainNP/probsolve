#include<iostream>
#include<list>
#include<string>

using namespace std;

string text;

int main(){
    list<char> ll;
    auto p = ll.begin();
    while(cin >> text){
        int sta=0;
        ll.clear();
        for (int i=0; i<text.length();i++){
            if (sta == 0){
                if (text[i] == '['){
                    sta = 1;
                    p = ll.begin();
                    continue;
                }
                if (text[i] == ']'){continue;}
                ll.push_back(text[i]);
            }
            else{
                if (text[i] == ']'){
                    sta = 0;
                    continue;
                }
                if (text[i] == '['){
                    sta = 1;
                    p = ll.begin();
                    continue;
                }
                ll.insert(p,text[i]);
            }
        }
        for (auto p = ll.begin();p!=ll.end();p++){cout << *p;}
        cout << "\n";
    }
    return 0;
}