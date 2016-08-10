#include <stdio.h>
int main()
{
    int a,c,count,b,k;
    float m;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(!a&&!b) break;
       count=0;
        k=a;
            for(k=a;k<=b;k++){
        c=sqrt(k);
        m=sqrt(k);
        if(c-m==0){
            count++;
        }
            }
             printf("%d\n",count);
        }
    return 0;
}
