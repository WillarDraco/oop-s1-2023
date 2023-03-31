#include <iostream>
#include <string>
#include "AssetPortfolio.cpp"
using namespace std;

int main(void) {
    AssetPortfolio a1(5);
    Asset coin(1, "coin");
    Asset house(100000, "house");
    a1.add_asset(coin);
    a1.add_asset(house);

    cout << a1.get_num_assets() << endl;
}