//
// Created by Nihal on 07/07/24.
//

#include "Class.h"

string Class::getName() {
    return name;
}

int Class::getAvailableSeats() {
    int count = 0;
    for(auto seat : seats) {
        if(!seat->isOccupied())
            count++;
    }
    return count;

}

BookingTicket *Class::bookSeat() {
    for(auto seat: seats) {
        if(seat->isOccupied())
            continue;
        seat->bookSeat();
        auto bookingTicket = new BookingTicket(name,seat->getId());
        return bookingTicket;
    }
    return  nullptr;
}

void Class::deleteBooking(BookingTicket* bookingTicket) {
    for(auto seat: seats) {
        if(seat->getId()==bookingTicket->getSeatNumber())
            seat->freeSeat();
    }
}
