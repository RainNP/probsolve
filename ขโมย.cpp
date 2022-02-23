#include<cstdio>

int x[200010];

int main(){
    int n,k,t,count = 1,i,j;
    scanf("%d %d %d",&n,&k,&t);
    for (i=0;i<n;i++) x[i] = 1;
    j = k;
    while(1){
        if (j == 0) break;
        else if (j == t-1) {count += 1; break;}
        else {
            if (x[j] == 1){
                x[j] = 0;
                count += 1;
            }
        }
        j = ((j+k)%n);
    }
    printf("%d",count);
}