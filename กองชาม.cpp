#include<cstdio>

int g[301];

int main(){
    int n,x;
    scanf("%d",&n);
    for (int j = 0 ; j<301 ; j++){
        g[j] = 0;
    }
    for (int i = 0; i<n ; i++){
        scanf("%d",&x);
        g[x] += 1;
    }
    int max = 0;
    for (int k = 0; k<301 ;k++){
        if (g[k] > max){max = g[k];}
    }
    printf("%d",max);
    return 0;
}