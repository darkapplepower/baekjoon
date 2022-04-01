#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int i=0;i<a;i++){
        int b, c=0;
        scanf("%d", &b);
        int *l=malloc(sizeof(int)*b);
        int p=0;
        for(int ii=0;ii<b;ii++){
            scanf("%d", &l[ii]);
            p+=l[ii];
        }
        p/=b;
        for(int ii=0;ii<b;ii++){
            if(p<l[ii]){
                c++;
            }
        }
        free(l);
        printf("%.3f%%\n", c/(float)b*100);
    }
}