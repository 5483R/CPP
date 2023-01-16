#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Constructor has been called" << std::endl;
    this->a = 0;
}
 Fixed::Fixed(const int n)
 {
    this->a = (n * (float)(1 << nb));
 }
    
Fixed::Fixed(const float n)
{
    a = roundf((float)n * (float)(1 << nb));
}
float Fixed::toFloat() const
{
    return(((float)this->a / (float)(1 << nb)));
}
float Fixed::toInt() const
{
    return(this->a >> this->nb);
}
Fixed::Fixed(const Fixed &oldobj)
{
    std::cout << "Copy Constructor has been called" << std::endl;

    *this = oldobj;
}
Fixed &Fixed::operator=(Fixed const &obj)
{
    std::cout << "copy assignment operator overload" << std::endl;
    if(this != &obj)
        this->a = obj.getRawBits();
    return *this;
}
int Fixed::getRawBits() const
{
    // std::cout << "getRawBits has been called" << std::endl;

    return(this->a);
}
void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits has been called" << std::endl;
    this->a = raw;
}

Fixed::~Fixed()
{
    std::cout << "Distructor has been called" << std::endl;
}
bool Fixed::operator>(const Fixed &other) const
{
    return(this->getRawBits() > other.getRawBits());
}
bool Fixed::operator<(const Fixed &other) const
{
    return(this->getRawBits() < other.getRawBits());

}
bool Fixed::operator>=(const Fixed &other) const
{
    return(this->getRawBits() >= other.getRawBits());
}
bool Fixed::operator<=(const Fixed &other) const
{
    return(this->getRawBits() <= other.getRawBits());
}
bool Fixed::operator==(const Fixed &other) const
{
    return(this->getRawBits() == other.getRawBits());

}
bool Fixed::operator!=(const Fixed &other) const
{
    return(this->getRawBits() != other.getRawBits());

}
Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed plus;
    plus.setRawBits(this->getRawBits() + other.getRawBits());
    return(plus);
}
Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed moins;
    moins.setRawBits(this->getRawBits() + other.getRawBits());
    return(moins);
}
Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed plus;
   plus.setRawBits(this->a * other.a >> this->nb);
    return(plus);
}
Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed plus;
    plus.setRawBits(this->a / other.a);
    return(plus);
}
Fixed &Fixed::operator++()
{
    ++this->a;
    return(*this);
}
Fixed Fixed::operator++(int)
{
    Fixed result;
    this->a++;
    return(result);
       
}
Fixed &Fixed::operator--()
{
    --this->a;
    return(*this);
}
Fixed Fixed::operator--(int)
{
    Fixed result;
    this->a--;
    return(result);
}
const Fixed &Fixed::min(const Fixed &wahed, const Fixed &zuj)
{
    if(wahed < zuj)
        return wahed;
    return zuj;
}
const Fixed &Fixed::max(const Fixed &wahed, const Fixed &zuj)
{
    if(wahed < zuj)
        return zuj;
    return wahed;
}
Fixed &Fixed::min(Fixed &wahed, Fixed &zuj)
{
    if(wahed < zuj)
        return wahed;
    return zuj;
}
Fixed &Fixed::max(Fixed &wahed, Fixed &zuj)
{
    if(wahed < zuj)
        return zuj;
    return wahed;
}
std::ostream& operator<<(std::ostream& os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return os;
}

