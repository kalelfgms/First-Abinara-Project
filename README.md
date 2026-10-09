# Convenience Store Inventory System

Sistem untuk tambah entry produk ke dalam inventory, dan menampilkan dalam output.

Dalam runner.cpp, addProduct() menambahkan produk ke dalam Invetory toko.

Tiap produk memiliki beberapa variable:
```
string name;                  nama produk
string type;                  tipe produk, misal: food, drink, hygiene, etc.
string subtype;               subtipe produk, misal: food, subtipe: instant/snacks/fruits
vector<string> properties;    data tambahan, misal: 100gr, 300kal, expires in 30 days
int price;                    harga produk
int stock;                    stok produk
```

Dalam runner.cpp, seperti ini:
```
addProduct(
    "indomie goreng",                       // name
    "food", "instant",                      // type, subtype
    4000, 11,                               // price, stock
    {"100gr", "300kal", "expire: 30 days"}  // properties
);
```

Dalam output, seperti ini:
```
[        family mart mulyos asik uhuy         ]
INVENTORY: 
| no | product name         | price   | stock | category        | properties                               |
| 1  | indomie goreng       | 4,000   |  11   | food, instant   | 100gr, 300kal, expire: 30 days           |
```

Untuk tiap addProduct(), satu baris baru akan muncul dalam outputnya.

## Program terdiri atas beberapa file
1. runner.cpp: tempat run program dan penambahan produk ke inventory
2. includes.hpp: berisi #include yang dipakai file lain
3. classes.hpp: tempat class Product dan Inventory
4. functions.hpp: function banyak dipake; print, format uang, dll.
5. interface.hp: mengurus output interface

## Dokumentasi
[Google Drive KPP 1 Internship Abinara-1](https://drive.google.com/drive/folders/1wpiN0y1ybEwYM4VGwzA1PQUx-1dTod0X?usp=sharing)