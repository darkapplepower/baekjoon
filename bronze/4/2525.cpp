#include <iostream>
int main(){
    int a, b, c;
    std::cin>>a>>b;
    std::cin>>c;
    b+=c;
    a+=b/60;
    b%=60;
    a%=24;
    std::cout<<a<<' '<<b;
}