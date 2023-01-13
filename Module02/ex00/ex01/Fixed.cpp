#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Constructor has been called" << std::endl;
    this->a = 0;
}
 Fixed::Fixed(const int n)
 {
    this->a = n * (1 << nb);
 }
    
Fixed::Fixed(const float n)
{
    a = roundf(n * (1 << nb));
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

std::ostream& operator<<(std::ostream& os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return os;
}

