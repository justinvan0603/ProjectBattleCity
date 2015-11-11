#pragma once
#include "Object.h"
#include "GameDefaultConstant.h"
#include "Keyboard.h"

enum MoveDirection
{
	UP = 0,
	LEFT = 1,
	DOWN = 2,
	RIGHT = 3,
	NUM_OF_DIRECTION = 4
};

class DynamicObject : public Object
{
protected:
	int _level;
	Sprite** _listSprite; //Quan ly tat ca cac frame cho tat ca cac huong chuyen dong
	Sprite* _curSprite;
	int _hitPoint;
	MoveDirection _currentDirection;


public:
	DynamicObject();
	
	virtual void Move() = 0;
	//virtual void Shoot() = 0;

	virtual void Update() = 0;
	~DynamicObject();
};

