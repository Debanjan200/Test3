#include <iostream>

void magic(){
    int sum=0;
    for(int i=0;i<10;i++){
        sum+=i;
    }

    std::cout<<sum<<"\n";
}

int main(){
    magic();
}