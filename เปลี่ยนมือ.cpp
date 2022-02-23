#include<cstdio>

int check(int *alr,int n){
    int i;
    for (i=0;i<n;i++){
        if (alr[i] == 0) return 0;
    }
    return 1;
}

int main(){
    int n,i,round=0;
    scanf("%d",&n);
    int sw[n];
    for (i=0;i<n;i++){
        scanf("%d",&sw[i]);
        sw[i] -= 1;
    }
    int alrpass[n],todo[n],tmp[n];
    for (i=0;i<n;i++){
        todo[i] = i;
        tmp[i] = i;
        alrpass[i] = 0;
    }
    while (1){
        if (check(alrpass,n)){
            break;
        }
        for (i=0;i<n;i++){
            todo[sw[i]] = tmp[i];
        }
        for (i=0;i<n;i++){
            tmp[i] = todo[i];
            if (todo[i] == i){alrpass[i] = 1;}
        }
        round += 1;
    }
    printf("%d",round);
}