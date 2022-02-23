#include<cstdio>

int main(){
    int n,p,max = 0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&p);
        if (p>0) max += p;
    }
    printf("%d",max);
}