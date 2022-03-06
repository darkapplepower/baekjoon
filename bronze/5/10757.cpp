#include <iostream>
#include <string>
int main(){
    std::string a, b;
    int a_size, b_size, size, i;
    int* result;
    std::cin>>a>>b;
    a_size=a.size(), b_size=b.size();
    size = a_size>b_size?a_size:b_size;
    result = new int[size+1]{};
    for(i=0;i<a_size;i++){
        result[i] += a[a_size-1-i]-48;
    }
    for(i=0;i<b_size;i++){
        result[i] += b[b_size-1-i]-48;
    }
    for(i=0;i<size;i++){
        if(result[i]>9){
            result[i]-=10;
            result[i+1]++;
        }
    }
    if(result[size]){
        std::cout<<result[size];
    }
    for(i=size-1;i>=0;i--){
        std::cout<<result[i];
    }
}