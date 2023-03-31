#include <iostream>
#include <string>
#include "Asset.cpp"
using namespace std;

int main(void) {
    Asset coin(0, "coin");
    Asset towel;

    cout << coin.get_product_type() << endl;
    cout << towel.get_product_type() << endl;
    cout << coin.get_value() << endl;
    cout << towel.get_value() << endl;
}