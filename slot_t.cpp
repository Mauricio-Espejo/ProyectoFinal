//
// Created by Lenovo on 28/11/2019.
//

#include "slot_t.h"

slot_t::slot_t(coordenada newposx,coordenada newposy):posx{newposx},posy{newposy},product_quantity{0} {

}

cantidad slot_t::get_quantity() {
    return product_quantity;
}

void slot_t::add_product_quantity(cantidad quantity) {
    product_quantity=product_quantity+quantity;
}

coordenada slot_t::get_posx() {
    return posx;
}

coordenada slot_t::get_posy(){
    return posy;
}
