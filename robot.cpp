#include<cstdio>

int main(){
    int i,x=0,y=0;
    char g;
    while(1){
        scanf("%c",&g);
        if (g == '\n'){break;}
        if (g == 'N') y+=1;
        else if (g == 'S') y-=1;
        else if (g == 'E') x+=1;
        else if (g == 'W') x-=1;
        else if (g == 'Z') {x=0; y=0;}
    }
    printf("%d %d",x,y);
}