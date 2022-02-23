#include<cstdio>

double x[100010];

int main(){
    int n,i,j,max_player,k;
    double gg,min = 1000000010;
    scanf("%d %d",&n,&k);
    max_player = n;
    for (i=0;i<n;i++){
        scanf("%d",&x[i]);
        if (x[i] < min) min = x[i];
    }
    gg = min * k;
    for (i=0;i<n;i++){
        if (x[i] == min) continue;
        x[i] *= k-1;
        if (x[i] >= gg) max_player -= 1;
    }
    printf("%d",max_player);
}