#include <iostream>
#include <string>
#include "Asset.h"
using namespace std;

Asset::Asset(int new_value, string new_product_type) {
    value = new_value;
    product_type = new_product_type;
}

string Asset::get_product_type() {
    return product_type;
}

int Asset::get_value() {
    return value;
} 


Asset::~Asset() {

}