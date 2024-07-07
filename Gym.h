//
// Created by Nihal on 07/07/24.
//

#ifndef GYM_H
#define GYM_H
#include <vector>

#include "Class.h"
#include "User.h"


class Gym {
private:
    string name ;
    unordered_map<string,Class*> classes;
    unordered_map<string,User*> users;
    unordered_map<int, BookingTicket*> bookings;
public:
    string getName();
    void showClasses();

    void bookSeat(string, string);

    Gym() {
        auto class1 = new Class("HRX",5);
        auto class2 = new Class("Yoga",11);
        classes["HRX"] = class1;
        classes["Yoga"]= class2;
    }

    void deleteBooking(string, int);
    void addUser(string);
    void showBookings(string _name);
};



#endif //GYM_H
