#include <iostream>

#include "Gym.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Gym c1;
    c1.addUser("U2");
    c1.addUser("U1");
    c1.showClasses();
    c1.bookSeat("U2","HRX");
    c1.bookSeat("U1","HRX");
    c1.showClasses();
    c1.showBookings("U1");
    c1.showBookings("U2");
    c1.deleteBooking("U1",1);
    c1.showBookings("U1");

    c1.showClasses();

    return 0;
}
