//
// Created by Nihal on 07/07/24.
//

#include "BookingTicket.h"



int BookingTicket::getSeatNumber() {
    return seatNumber;
}

bool BookingTicket::isValid() {
    return valid;
}

int BookingTicket::getId() {
    return  id;
}

void BookingTicket::setInvalid() {
    valid = false;
}

string BookingTicket::getClassName() {
    return className;
}
