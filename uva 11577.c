// Email:mdkamrulhasan989@gmail.com //

#include <stdio.h>

int main()
{
    int ara[50],assci,i,t,max;
    char st[1010];
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(st);
        for(i=65;i<=90;i++)
            ara[i]=0;
        for(i=0;st[i];i++){
            if(isalpha(st[i])){
                assci=toupper(st[i]);
                ara[assci]++;
            }
        }
        max=ara[65];
        for(i=66;i<=90;i++){
            if(ara[i]>max){
                max=ara[i];
            }
        }
        for(i=65;i<=90;i++){
            if(ara[i]==max)
                printf("%c",i+32);
        }
        printf("\n");
    }
    return 0;
}
