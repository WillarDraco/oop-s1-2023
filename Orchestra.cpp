#include "Musician.h"
#include "Orchestra.h"
#include <iostream>
#include <string>

Orchestra::Orchestra() { // default constructor
        int max_size = 0;
        members = new Musician[max_size];
        max_member = 0;
}

Orchestra::Orchestra(int new_size) {   // constructor for an orchestra of given size
        int size = new_size;
        members = new Musician[size];
        max_member = new_size;
        num_member = 0;
}

bool Orchestra::has_instrument(std::string instrument) {
        bool inst = false;
        for (int i = 0; i < num_member; i++) {
                if (members[i].get_instrument() == instrument) {
                        inst = true;
                        return inst;
                } else {
                        inst = false;
                }
        }
        return inst;
}

bool Orchestra::add_musician(Musician new_musician) {
        int current_num = num_member;
        if (current_num < max_member) {
                members[current_num] = new_musician;
                num_member++;
                return true;
        } else {
                return false;
        }
}