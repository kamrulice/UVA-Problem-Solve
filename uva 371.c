#include <stdio.h>

int main()
{
     long long int L,H,count,swap;
    while(scanf("%lld %lld",&L,&H)!=EOF){
        if(!L&&!H)break;
       long long int K,m;
       long long int max=0,max1=0;
        if(L>H){
        swap=L;
        L=H;
        H=swap;
        }
        for(m=L;m<=H;m++){
        count=0;
        K=m;
        while(1){
            if(K%2==0){
                K=K/2;
                }
            else{
                K=3*K+1;
                }
            count++;
        if(K==1)break;
                }
            if(max<count){
            max=count;
            if(max1<m){
            max1=m;
            }
            }
            }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",L,H,max1,max);
        }
    return 0;
}
