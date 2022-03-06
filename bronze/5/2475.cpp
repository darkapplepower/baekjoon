#include <iostream>
int main(){
    int i, a=0, b;
    for(i=0;i<5;i++){
        std::cin>>b;
        a+=b*b;
        a%=10;
    }
    std::cout<<a;
}