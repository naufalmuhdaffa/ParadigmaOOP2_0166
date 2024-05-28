#include <iostream>
using namespace std;

class seseorang {
public:
    virtual void pesan() = 0; // pure virtual function
    //virtual void pesan() { // virtual function biasa
    //    cout << "pesan dari seseorang" << endl;
    //}
};

class joko : public seseorang {
public:
    // deklarasi
    void pesan() {
        // implementasi
        cout << "Pesan dari joko" << endl;
    }
};

class lia : public seseorang {
    void pesan() {

    }
};

int main()
{
    
}