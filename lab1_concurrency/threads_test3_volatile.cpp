#include <iostream>
#include <thread>



using namespace std;

volatile int counter = 0;


void increment_counter() {
    
    for (int i = 0; i < 1000000000; i++) {
        counter++;
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
