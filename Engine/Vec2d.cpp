#include "Vec2d.h"

Vec2d::Vec2d( float x_in,float y_in )
		:
	x( x_in ),
	y( y_in )
{
}

Vec2d Vec2d::operator+( const Vec2d & rhs ) const
{
	return Vec2d( x + rhs.x,y + rhs.y );
}

Vec2d & Vec2d::operator+=( const Vec2d & rhs )
{
	return *this = *this + rhs;
}

Vec2d Vec2d::operator*( const float rhs ) const
{
	return Vec2d( x * rhs,y * rhs );
}

Vec2d & Vec2d::operator*=( const float rhs )
{
	return *this = *this * rhs;
}
