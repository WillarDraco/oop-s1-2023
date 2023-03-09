#include <iostream>
#include <string>
using namespace std;

extern void print_binary_str(string decimal_number);

int main(void) {
    string number = "12";
    
    print_binary_str(number);
}