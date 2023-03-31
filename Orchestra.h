#ifndef ORCHESTRA_H
#define ORCHESTRA_H
#include <string>
#include "Musician.h"
using namespace std;

class Orchestra {
private:
    int max_member;
    Musician *members;
    int num_member;
public:
    Orchestra();

    Orchestra(int new_size);

    int get_current_number_of_members() {return num_member;}

    // returns true if any musician in the orchestra plays the specified instrument
    // otherwise returns false
    bool has_instrument(std::string instrument);

    Musician *get_members() {return members;}        // returns the array of members of the orchestra

    // returns true and adds new musician to the orchestra if the orchestra is not full
    // otherwise returns false
    bool add_musician(Musician new_musician);

    ~Orchestra() {
        delete[] members;
    };
};

#endif