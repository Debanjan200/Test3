#include <iostream>
#include <thread>
#include <mutex>

std::mutex mt;

int sum=1;

void magic(){

    std::lock_guard lk(mt);

    for(int i=0;i<10;i++){
        sum+=1;
    }
}

int main(){
    std::thread t1[100];
    for(int i=0;i<100;i++){
        t1[i]=std::move(std::thread(magic));
    }

    for(int i=0;i<100;i++){
        t1[i].join();
    }

    std::cout<<sum<<"\n";
}