#pragma once

class Vec2d
{
public:
	Vec2d() = default;
	Vec2d( float x_in,float y_in );
	Vec2d operator+( const Vec2d& rhs ) const;
	Vec2d& operator+=( const Vec2d& rhs );
	Vec2d operator*( const float rhs ) const;
	Vec2d& operator*=( const float rhs );
public:
	float x;
	float y;
};