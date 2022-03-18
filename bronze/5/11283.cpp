#include <iostream>
int main(){
    char a, b, c;
    int d;
    std::cin>>a>>b>>c;
    a-=0b11100000;
    b-=0b10000000;
    c-=0b10000000;
    d = (a<<12) + (b<<6) + (c);
    std::cout<<d - 44031;
}