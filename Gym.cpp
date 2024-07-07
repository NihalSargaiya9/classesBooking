//
// Created by Nihal on 07/07/24.
//

#include "Gym.h"

#include <iostream>
int BookingTicket::generatedId = 0;
string Gym::getName() {
    return name ;
}

void Gym::showClasses() {
    for(auto _class : classes) {

        cout<<"name :"<< _class.first<<" "<<_class.second->getAvailableSeats()<<endl;
    }
}

void Gym::bookSeat(string userName, string className) {
    auto bookingTicket = classes[className]->bookSeat();
    if(bookingTicket) {
        bookings[bookingTicket->getId()] = bookingTicket;
        auto ticketCopy = BookingTicket(*bookingTicket);
        users[userName]->addBooking(ticketCopy);
    }
}

void Gym::deleteBooking(string userName, int bookingId) {
    auto className = bookings[bookingId]->getClassName();
    classes[className]->deleteBooking(bookings[bookingId]);
    users[userName]->deleteBooking(bookingId);
}

void Gym::addUser(string _name) {
    auto user = new User(_name);
    users[_name]= user;
}

void Gym::showBookings(string _name) {
    users[_name]->showBookings();

}
