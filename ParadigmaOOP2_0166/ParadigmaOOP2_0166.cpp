#include <iostream>
using namespace std;

class seseorang {
public:
    virtual void pesan() = 0; // pure virtual function
    virtual void pesan() { // virtual function biasa
        cout << "Pesan dari seseorang" << endl;
    }
};

int main()
{
    
}