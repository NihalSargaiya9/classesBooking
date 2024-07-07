//
// Created by Nihal on 07/07/24.
//

#ifndef CLASS_H
#define CLASS_H
#include <string>
#include <vector>

#include "BookingTicket.h"
#include "Seat.h"
using namespace  std;

class Class {
private:
    string name ;
    vector<Seat*> seats;
public:
    string getName();

    Class(string _name, int _noSeats):name(_name) {
        for(int i = 0 ; i < _noSeats ; i++) {
            seats.push_back(new Seat(i));
        }
    }

    int getAvailableSeats();

    BookingTicket* bookSeat();
    void deleteBooking(BookingTicket*);
};



#endif //CLASS_H
