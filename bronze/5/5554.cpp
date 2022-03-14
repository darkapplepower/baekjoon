#include <iostream>
int main(){
    int a, b, c, d, e;
    std::cin>>a>>b>>c>>d;
    e = a+b+c+d;
    std::cout<<e/60<<'\n'<<e%60;
}