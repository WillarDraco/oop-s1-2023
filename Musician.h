#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>
using namespace std;

class Musician {
private:
    string instrument;
    int experience;
public:
    Musician() {
        instrument = "null";
        experience = 0;
    }
    Musician(string n_inst, int n_exp) {
        instrument = n_inst;
        experience = n_exp;
    }

    string get_instrument(){ return instrument;}
    int get_experience(){return experience;};

    void set_instrument(string new_instrument){instrument = new_instrument;}
    void set_experience(int new_experience){experience = new_experience;}
};

#endif
