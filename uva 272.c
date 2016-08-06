#include <stdio.h>

int main(){
    char st[1000];
    while(scanf("%s",st)!=EOF){
        if(strcmp(st=="To be or not to be," quoth the Bard, "thatis the question"))
printf("%s",st);
else if(strcmp(st=="The programming contestant replied: ``I must disagree.To `C' or not to `C', that is The Question!''"))
printf("%s",st);
    }
    return 0;
}
