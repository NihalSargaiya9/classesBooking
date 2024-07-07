//
// Created by Nihal on 07/07/24.
//

#ifndef BOOKINGTICKET_H
#define BOOKINGTICKET_H
#include <string>
using namespace  std;

class BookingTicket {
private:
    int id ;
    string className ;
    int seatNumber;
    bool valid;


public:
    static int generatedId ;

    BookingTicket(string _classObj, int _seatObj):className(_classObj),seatNumber(_seatObj) {
        valid = true;
        id = generatedId++;
    }
    BookingTicket ( const BookingTicket &ticketCopy) = default;
    string getClassName();
    int getSeatNumber();
    bool isValid();
    int getId();
    void setInvalid();
};



#endif //BOOKINGTICKET_H
