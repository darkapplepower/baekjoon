#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin>>a>>b;
    if(b>0){
        cout<<(a>0?1:2);
    }else{
        cout<<(a>0?4:3);
    }
}