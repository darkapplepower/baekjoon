#include <iostream>
int main(){
    int a, b=0;
    std::cin>>a;
    while(a%3&&a>=5){
        a-=5;
        b++;
    }
    if(a%3){
        std::cout<<-1;
        return 0;
    }
    std::cout<<b+(a/15)*3+(a%15)/3;
}