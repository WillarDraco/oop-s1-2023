#ifndef ASSET
#define ASSET
#include <iostream>
#include <string>
using namespace std;

class Asset {
private:
    int value;
    string product_type;

public:
    Asset() {
    product_type = "";
    value = 0;                           // a default constructor 
    }
    
    // a constructor that takes the product type  and value
    Asset(int new_value, string new_product_type);  

    string get_product_type(); // returns the financial asset type 
    int get_value();                   // returns the the value of asset

    ~Asset();       // A default destructor
};
#endif
