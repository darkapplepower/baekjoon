#include <iostream>
int main(){
    int a, b, i;
    std::cin>>a>>b;
    a=a*b;
    for(i=0;i<5;i++){
        std::cin>>b;
        std::cout<<b-a<<' ';
    }
}