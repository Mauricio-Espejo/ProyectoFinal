//
// Created by Lenovo on 28/11/2019.
//

#ifndef PRUEBA_SLOT_T_H
#define PRUEBA_SLOT_T_H


#include <cstddef>
#include "common.h"
class slot_t {
private:
    coordenada posx;
    coordenada posy;
    cantidad product_quantity;
public:
    slot_t(coordenada newposx,coordenada newposy);
    cantidad get_quantity();
    void add_product_quantity(cantidad quantity);
    coordenada get_posx();
    coordenada get_posy();
};


#endif //PRUEBA_SLOT_T_H
