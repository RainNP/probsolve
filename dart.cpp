#include<cstdio>
#include<cmath>

int main(){
    int n,x,y,point = 0;
    double r;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        r = sqrt(pow(x,2)+pow(y,2));
        if (r <= 2){point += 5;}
        else if (r <= 4){point += 4;}
        else if (r <= 6){point += 3;}
        else if (r <= 8){point += 2;}
        else if (r <= 10){point += 1;}
        else point += 0;
    }
    printf("%d",point);
}