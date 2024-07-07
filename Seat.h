//
// Created by Nihal on 07/07/24.
//

#ifndef SEAT_H
#define SEAT_H



class Seat {
private  :
    int id;
    bool occupied ;
public:
    explicit  Seat(int _id ): id(_id) {
        occupied  = false;
    }

    bool isOccupied() const;
    void bookSeat() ;
    void freeSeat();
    int getId() const;
};



#endif //SEATS_H
