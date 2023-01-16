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

        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;
        
        Fixed operator+(const Fixed &other) const;
        Fixed operator-(const Fixed &other) const;
        Fixed operator*(const Fixed &other) const;
        Fixed operator/(const Fixed &other) const;

        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);

        static const Fixed &min(const Fixed &wahed, const Fixed &zuj);
        static const Fixed &max(const Fixed &wahed, const Fixed &zuj);
        static Fixed &min(Fixed &wahed, Fixed &zuj);
        static Fixed &max(Fixed &wahed, Fixed &zuj);
        

        
        ~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed &fixed);
