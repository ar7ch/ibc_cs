#include <iostream>
#include <thread>
#include <mutex>

using namespace std;
mutex mtx;

int counter = 0;

void increment_counter() {

    for (int i = 0; i < 1000000; i++) {
        mtx.lock();
        counter++;
        mtx.unlock();
    }

    return;
}

int main(){
    
    thread first(increment_counter);
    thread second(increment_counter);
    
    first.join();
    second.join();
    
    cout << "updated counter value: " << counter << endl;
    
    return 0;
}
