//Email:mdkamrulhasan989@gmail.com //

#include <stdio.h>

int main()
{
    long long int p,m,i,j,k,swap,count;
    while(scanf("%lld %lld",&i,&j)!=EOF){
            printf("%lld %lld ",i,j);
        p=0;
        if(i>j){
            swap=i;
            i=j;
            j=swap;
        }
        for(k=i;k<=j;k++){
           m=k;
            count=1;
            while(m!=1){
                if(m%2!=0){
                    m=3*m+1;
                    }
                else{
                    m=m/2;
                }
                if(m==1){
                    count++;
                    break;
                }
                else ++count;
            }
            if(p<count){
                p=count;
            }
            }
            printf("%lld\n",p);
    }
    return 0;
}
