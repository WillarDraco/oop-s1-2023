#include <iostream>
#include <string>
#include "AssetPortfolio.h"
using namespace std;

AssetPortfolio::AssetPortfolio() {
    max_assets = 0;
    asset_folio = new Asset[0];
    num_assets = 0;
}


AssetPortfolio::AssetPortfolio(int size) {
    max_assets = size;
    asset_folio = new Asset[size];
    num_assets = 0;
}

int AssetPortfolio::get_num_assets() {
    return num_assets;
}

bool AssetPortfolio::has_asset(string product) {
    bool has_asset = false;
    for (int i = 0; i < num_assets; i++) {
        if (asset_folio[i].get_product_type() == product) {
            has_asset = true;
            return has_asset;
        } else {
            has_asset = false;
        }
    }
    return has_asset;
}

bool AssetPortfolio::add_asset(Asset new_asset) {
    bool not_full = false;
    if (num_assets < max_assets) {
        not_full = true;
        asset_folio[num_assets] = new_asset;
        num_assets++;
        return not_full;
    } else {
        not_full = false;
        return not_full;
    }
}

AssetPortfolio::~AssetPortfolio() {
    delete[] asset_folio;
}