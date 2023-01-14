#include <iostream>
#include <cmath>
class Fixed{
    private:
        int a;
        const static int nb = 8;
    public:
        Fixed();
        Fixed(const int n);
        Fixed(const float n);
        Fixed(const Fixed &oldobj);
        Fixed &operator=(Fixed const &obj);
        float toFloat() const;
        float toInt() const;
        int getRawBits()const;
        void setRawBits(int const raw);
        ~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed &fixed);
