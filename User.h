//
// Created by Nihal on 07/07/24.
//

#ifndef USER_H
#define USER_H
#include "BookingTicket.h"


class User {
    string name ;
    vector<BookingTicket> bookings;
public:
    string getName() ;
    void showBookings() ;
    void addBooking(BookingTicket _bookingTicket);
    explicit User(const string &name)
        : name(name) {
    }
    void deleteBooking(int bookingId);
};



 #endif //USER_H
