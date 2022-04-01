#include <iostream>
int main(){
    int a, b, c;
    std::cin>>a;
    std::cin>>b;
    if(a>b){
        a=b;
    }
    std::cin>>b;
    if(a>b){
        a=b;
    }
    std::cin>>c;
    std::cin>>b;
    if(c>b){
        c=b;
    }
    std::cout<<a+c-50;
}