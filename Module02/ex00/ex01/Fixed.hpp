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
        float toFloat() const
        {
            return (a / (1 << nb));
        };
        float toInt() const
        {
            return (a / (1 << nb));
        };
        int getRawBits()const;
        void setRawBits(int const raw);
        ~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed &fixed);
