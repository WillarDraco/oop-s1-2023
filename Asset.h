#include <iostream>
#include <string>
using namespace std;

class Asset {
private:
    int value;
    string product_type;

public:
    Asset();                            // a default constructor 

    // a constructor that takes the product type  and value
    Asset(int value, string product_type);      

    string get_product_type(); // returns the financial asset type 
    int get_value();                   // returns the the value of asset

                      // A default destructor
};