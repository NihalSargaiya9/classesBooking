//
// Created by Nihal on 07/07/24.
//

#include "User.h"

#include <iostream>
#include <ostream>

string User::getName() {
    return name;
}

void User::showBookings() {
    cout<<" You have following bookings"<<endl;
    for(auto booking : bookings) {
        if(booking.isValid())
            cout<<booking.getId()<< " class: "<< booking.getClassName()<<" seat: "<<booking.getSeatNumber()<<endl;
    }

}

void User::addBooking(BookingTicket _bookingTicket) {
    bookings.push_back(_bookingTicket);
}

void User::deleteBooking(int bookingId) {
    for(auto &booking : bookings) {
        if(booking.getId()==bookingId) {
            booking.setInvalid();
        }
    }
}
