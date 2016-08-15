#include <stdio.h>

int main()
{
    int i,j,n,p,k,T,temp,count;
    int array[100];
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
            for(i=0;i<n;i++){
            scanf("%d",&array[i]);
            }
            count=0;
            for(i=0;i<=n-1;i++){
                for(j=i+1;j<n;j++){
                    if(array[i]>array[j]){
                        temp=array[i];
                        array[i]=array[j];
                        array[j]=temp;
                        count++;
                }
                    }
            }
    printf("Optimal train swapping takes %d swaps.\n",count);
}
return 0;
}
