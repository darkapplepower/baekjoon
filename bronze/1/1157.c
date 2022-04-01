#include <stdio.h>
#include <string.h>
int main(){
    char a[1000001];
    int r[26]={0, };
    int rr[26];
    int c;
    scanf("%s", a);
    int d=strlen(a);
    for(int i=0;i<d;i++){
        if(96<a[i]&&a[i]<123){
            a[i]-=32;
        }
        r[a[i]-65]++;
    }
    for(int i=0;i<26;i++){
        rr[i]=i;
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<25;j++){
            if(r[rr[j]]<r[rr[j+1]]){
                c=rr[j];
                rr[j]=rr[j+1];
                rr[j+1]=c;
            }
        }
    }
    printf("%c", (r[rr[0]]==r[rr[1]])?'?':(rr[0]+65));
}