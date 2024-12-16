// Online C++ compiler to run C++ program online
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Q1
    // it would be 7:00 pm, with an offset of +9
    
    //Q2 
    //-7
    
    time_t now1 = time(nullptr);
    
    //Program 1
    cout << "Current time: " << ctime(&now1) << endl;
    
    int offset;
    
    //Program 2
    cout << "What timezone do you want to see? (type the number offset please)" << endl;
    cin >> offset;
    
    now1 += offset * 3600;
    
    tm* timezone = gmtime(&now1);
    
    cout << "The current time there is: " << asctime(timezone) << endl;
    
    int guess;
    
    cout << "Whats 1+1?" << endl;
    time_t start = time(nullptr);
    
    cin >> guess;
    time_t end = time(nullptr);
    
    int total = end - start;
    
    if (guess == 2){
        cout << "You took " << total << " seconds to answer! And you were correct!" << endl;
    }
    else {
        cout << "You took " << total << " seconds to answer. But you were wrong dummie." << endl;
    }

    return 0;
}

