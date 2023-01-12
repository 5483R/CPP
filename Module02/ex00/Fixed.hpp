#include <iostream>

class Fixed{
    private:
    int a;
    const static int nb = 8;
    public:
    Fixed();
    Fixed(const Fixed &oldobj);
    Fixed &operator=(Fixed const &obj);
    int getRawBits()const;
    void setRawBits(int const raw);
    ~Fixed();
};