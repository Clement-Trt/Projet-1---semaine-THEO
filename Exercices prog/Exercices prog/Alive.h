//#pragma once

#ifndef ALIVE_H
#define ALIVE_H


class Alive
{
protected:
	float vie_max;
	float vie;


public:
	Alive();
	Alive(float _vieMax, float _vie);

	virtual float GetMaxLife();
	virtual float GetLife();
	virtual void TakeDamage(float _degats);

};

#endif // !ALIVE_H



