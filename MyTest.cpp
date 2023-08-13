#include <iostream>
#include <thread>

void magic(){
    int sum=1;
    for(int i=0;i<10;i++){
        sum*=i;
    }

    std::cout<<sum<<"\n";
}

int main(){
    std::thread t1(magic);
    t1.join();
}