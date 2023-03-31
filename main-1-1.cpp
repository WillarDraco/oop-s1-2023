#include <iostream>
#include <string>
#include "Asset.cpp"
using namespace std;

int main(void) {
    Asset towel;
    Asset coin(5, "coin");
    cout << coin.get_product_type() << endl;
}