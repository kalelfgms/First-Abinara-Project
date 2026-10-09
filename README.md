feel meeee

PROGRAM: ngestok product dlm inventory alfamart mulyosari anjay

in program, u can add a product to the stores inventory

to add, u need the product id
ID code: 0000 > 4 digit id, numbering below,first 2 = type, second 2 subtype
add another 00 for product number, cause there can be two instant foods > indomie, popmie, so there can be 010101, 010102 | or maybe not, since they can diffed by prod name
01 food
    01 instant
        01 indomie
        02 popmie
    02 snacks
        01 oreo
        02 citato
    03 fruit
        01 pisang
        02 
02 drink
    01 water
        01 aqua
    02 energy
        01
    03 coffee
        01
03 hygiene
    01 soap
    02 shampoo
    03 toothpaste
04 medicine
    01 pills
    02 syrup

EX: 
energy drink > 0202
soap, hygiene > 0301

INTERFACE-----------------------------------
[        family mart mulyos asik uhuy         ]
INVENTORY:
| no | product name         | price   | stock |
| 99 | twentycharactershaha | 999,999 |  999  |
| 02 | premium chips        | 15,000  |  999  |
| 3  | air gunung krakatau  | 10,000  |  999  |

(add type, subtype, and id too??)

ACTIONS:
[A] Add Product
[R] Remove Product
[V] View Product
[X] Exit 

Choose Action: (cin), either A, R, V, X
A--------------------------------------------
Add Product | choose product type (typelist) : str
Choose Subtype (subtypelist) : str

R--------------------------------------------
Remove Product | Enter Product no. :
V--------------------------------------------
show ts
[        family mart mulyos asik uhuy         ]
[        PRODUCT: twentycharactershaha        ]
| type: hai
|  | subtype: lol
| price: 999,999
| stock: 99
[            data gizi           ]
| weight | calories | expires in | extend depending on wtv properties
|  999gr |  9999kal |   14 days  |
X--------------------------------------------
Goodbye!


view product shows more data bout that product (priv values in class)

no: | 2char(01, 10) |
prodname: 20 char + 2 space left n right, rest fill w space |
price 7 char + 2 space lr, max 999,999 |
amount: 2spc 3char 2spc |

after adding, the inventory updates to show new products in stock

have one .h file for storing stuff all files hsould be able to see?
bool running, string productlist,  