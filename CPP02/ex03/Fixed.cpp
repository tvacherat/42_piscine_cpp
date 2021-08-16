#include "Fixed.hpp"

const int	Fixed::_fbits = 8;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed():	m_value(0)
{
}

Fixed::Fixed( const Fixed & src )
{
	*this = src;
}

Fixed::Fixed(const int i): m_value(i << _fbits)
{
}

Fixed::Fixed(const float f): m_value(roundf(f * (1 << _fbits)))
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

float	Fixed::toFloat(void) const
{
	return (float(m_value) / (1 << _fbits));
}

int		Fixed::toInt(void) const
{
	return (m_value >> _fbits);
}

Fixed &	Fixed::min(Fixed & f1, Fixed & f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed const &	Fixed::min(Fixed const & f1, Fixed const & f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed &			Fixed::max(Fixed & f1, Fixed & f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

Fixed const &	Fixed::max(Fixed const & f1, Fixed const & f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	m_value = rhs.m_value;
	return (*this);
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	return (m_value > rhs.m_value);
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return (m_value < rhs.m_value);
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return (m_value >= rhs.m_value);
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return (m_value <= rhs.m_value);
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return (m_value == rhs.m_value);
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (m_value != rhs.m_value);
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	return (Fixed(toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	return (Fixed(toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	return (Fixed(toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	return (Fixed(toFloat() / rhs.toFloat()));
}

Fixed &	Fixed::operator++(void)
{
	m_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	f(*this);

	m_value++;
	return (f);
}

Fixed &	Fixed::operator--(void)
{
	m_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	f(*this);

	m_value--;
	return (f);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int	Fixed::getRawBits(void) const
{
	return (m_value);
}

void	Fixed::setRawBits(int const raw)
{
	m_value = raw;
}

/* ************************************************************************** */