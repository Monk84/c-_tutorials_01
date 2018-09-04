#pragma once

#include "Graphics.h"
#include "Dude.h"

class Poo
{
public:
	void Init( Vec2d pos_in,Vec2d vel_in );
	void Update( float dt );
	bool TestCollision( const Dude& dude ) const;
	void Draw( Graphics& gfx ) const;
private:
	Vec2d pos;
	Vec2d vel;
	static constexpr float width = 24;
	static constexpr float height = 24;
	bool initialized = false;
};