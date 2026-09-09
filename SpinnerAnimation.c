#include <iostream>
#include <windows.h> 

using namespace std;

int main() {
    char spinner[] = {'|', '/', '-', '\\'};
    
    cout << "Loading ";
    
    for (int i = 0; i < 100; i++) {
        cout << spinner[i % 4];     
        Sleep(100);                
        cout << '\b';              
    }

    cout << " Done!" << endl;
    return 0;
}