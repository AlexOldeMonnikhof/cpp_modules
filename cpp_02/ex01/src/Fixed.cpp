#include "../inc/Fixed.hpp"

const int	Fixed::fractionalBits = 8;

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	value = 0;
}

Fixed::Fixed(const int input)
{
	cout << "Int constructor called" << endl;
	value = input << fractionalBits;
}

//multiplying by 256 (1 << 8) but needing to brackets for proper typecast
Fixed::Fixed(const float input)
{
	cout << "Float constructor called" << endl;
	value = roundf(input * (1 << fractionalBits));
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed& other)
{
	cout << "Copy constructor called" << endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	cout << "Copy assignment operator called" << endl;
	if (this != &other)
		this->value = other.getRawBits();
	return (*this);
}

//deviding by 256 (1 << 8) but needing to brackets for proper typecast
float	Fixed::toFloat(void) const
{
	return ((float)value / float(1 << fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (this->value >> fractionalBits);
}

int	Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

//show ints as floats since we dont know if we have an int or float
ostream&	operator<<(ostream& stream, const Fixed& other)
{
	stream << other.toFloat();
	return (stream);
}
