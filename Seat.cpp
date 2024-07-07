//
// Created by Nihal on 07/07/24.
//

#include "Seat.h"

bool Seat::isOccupied() const {
    return  occupied;
}

void Seat::bookSeat() {
    occupied = true;
}

void Seat::freeSeat() {
    occupied = false;
}

int Seat::getId() const {
    return id;
}
