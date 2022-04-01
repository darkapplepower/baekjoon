#include <iostream>
int main(){
    int a, s=0;
    for(int i=0;i<5;i++){
        std::cin>>a;
        if(a<40){
            a=40;
        }
        s+=a;
    }
    std::cout<<s/5;
    
}