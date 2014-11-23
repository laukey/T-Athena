#pragma once

#include "cocos2d.h"

class StartGame :
	public cocos2d::CCLayer
{
public:
	StartGame();
	~StartGame();

	static cocos2d::Scene* createScene();

	virtual bool init();

	//void menuCloseCallback(cocos2d::Ref* pSender);

	static StartGame* create();
};

