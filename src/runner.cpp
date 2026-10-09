#include "../include/functions/interface.hpp" // for displaying to output

void addProduct(string n, string t, string subt, int p, int stk, vector<string> prop){//at this point theres no need for child classes tbh.....
    product Product(
        n, t, subt, p, stk, prop
    );
    inventory.push_back(Product);
}

int main () {
    addProduct(
        "indomie goreng",                       // name
        "food", "instant",                      // type, subtype
        4000, 55,                               // price, stock
        {"100gr", "300kal", "expire: 30 days"}  // properties
    );
    addProduct(
        "popmie goreng rebus",
        "food", "instant",
        5000, 125,
        {"80gr", "250kal", "expire: 30 days"}
    );

    showInterface();
    return 0;
}