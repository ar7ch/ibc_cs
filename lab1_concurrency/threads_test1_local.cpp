#include <iostream>
#include <thread>



using namespace std;



int counter = 0;    

void increment_counter(int *x) {
    
    for (int i = 0; i < 1000000; i++) {
        (*x)++;
    }
    
    return;
}



int main(){
    
    
    thread first(increment_counter, &counter);
    thread second(increment_counter, &counter);
    
    first.join();
    second.join();
    
    cout << "updated counter value: " << counter << endl;
    
    return 0;
}
