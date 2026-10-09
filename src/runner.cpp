#include "../include/functions/interface.hpp" // for displaying to output

template <typename T, typename... Args>
void addProduct(vector<unique_ptr<Product>>& Inventory, Args&&... args){
    Inventory.push_back(make_unique <T>(forward<Args>(args)...));
};
//some magical thing yg bisa masuk args apapun, type apapun, dn push ke dlm inventory
//Universal Factory Helper

int main () {
    //FOOD
    addProduct<Food>(Inventory,
        "indomie goreng", "instant",    //name, subtype
        4000, 150,                      //price, stock
        100, 300, 2                     //grams, cal, expire (days)
    );
    //DRINK
    addProduct<Drink>(Inventory,
        "aqua", "water",                //name, subtype
        5000, 30,                       //price, stock
        300, 0, 30                      //volume(ml), gula, expire
    );

    //HYGIENE
    addProduct<Hygiene>(Inventory,
        "sampo batman", "shampo",       //name, subtype
        20000, 15,                      //price, stock
        200, "batman"                   //volume(ml), bau
    );

    //MEDICINE
    addProduct<Medicine>(Inventory,
        "panadol merah", "kaplet",      //name, subtype
        15000, 10,                      //price, stock
        "100mg", "sakit kepala", 365    //dose, treats what, expire
    );

    showInterface();
    return 0;
}

//find data makanan n stuff