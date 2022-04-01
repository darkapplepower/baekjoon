#include <stdio.h>
int main(){
    int a;
    int b=0, c=0;
    int d;
    scanf("%d", &a);
    for(int i=0;i<a;i++){
        scanf("%d", &d);
        b+=d;
        if(d>c){
            c=d;
        }
    }
    float p=(b/(float)a);
    p/=c;
    p*=100;
    printf("%f", p);
}