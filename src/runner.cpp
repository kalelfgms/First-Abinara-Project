#include "../include/classes.hpp"
#include "../include/functions/interface.hpp"

enum productType {
    Food, Drink, Hygiene, Medicine
};

//more switch case, but check for each type?
void addItem(productType prodType, string n, string subt, int p, int stk, vector<string> prop){//at this point theres no need for child classes tbh.....
    switch (prodType){
        case productType::Food:{
            food Product(
                n, subt, p, stk
            );
            Product.setProperties(prop);
            inventory.push_back(Product);
            break;
        }
        case productType::Drink:{
            food Product(
                n, subt, p, stk
            );
            Product.setProperties(prop);
            inventory.push_back(Product);
            break;
        }
        case productType::Hygiene:{
            food Product(
                n, subt, p, stk
            );
            Product.setProperties(prop);
            inventory.push_back(Product);
            break;
        }
        case productType::Medicine:{
            food Product(
                n, subt, p, stk
            );
            Product.setProperties(prop);
            inventory.push_back(Product);
            break;
        }
    }

}

int main () {
    addItem(
        productType::Food,
        "indomie goreng", "instant",            // name, subtype
        4000, 11,                               // price, stock
        {"100gr", "300kal", "expire: 30 days"}  // properties
    );


    showInterface();
    return 0;
}