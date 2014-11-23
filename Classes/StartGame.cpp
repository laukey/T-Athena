#include "StartGame.h"

USING_NS_CC;

StartGame::StartGame()
{
}

StartGame::~StartGame()
{
}

StartGame* StartGame::create() 
{ 
	StartGame *pRet = new StartGame();
	if (pRet && pRet->init()) 
	{ 
		pRet->autorelease(); 
		return pRet;	
	} 
	else	
	{ 
		delete pRet; 
		pRet = NULL; 
		return NULL; 
	} 
}

Scene* StartGame::createScene()
{
	Scene* scene = Scene::create();
	StartGame* layer = StartGame::create();
	scene->addChild(layer);
	return scene;
}

bool StartGame::init()
{
	if (!Layer::init())
	{
		return false;
	}

	Size visibleSize = CCDirector::getInstance()->getVisibleSize();
	Vec2 origin = CCDirector::getInstance()->getVisibleOrigin();

	CCSprite* backGround = CCSprite::create("Background/AthenaBg.jpg");
	backGround->setPosition(Vec2(visibleSize.width*0.5 + origin.x, visibleSize.height*0.5 + origin.y));
	backGround->setScaleX(1.2);
	backGround->setScaleY(1.1);
	this->addChild(backGround);

	return true;
}