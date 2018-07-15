#ifndef __GAME_H__
#define ___GAME_H__

#include "cocos2d.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;
using std::list;

class Game : public cocos2d::Layer {
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	CREATE_FUNC(Game);
private:
	void preloadMusic();
	void playBackgroundMusic();

	void addTouchListener();
	void addKeyboardListener();
	void addCustomListener();

	bool onTouchBegan(Touch *touch, Event *event);
	void onTouchMoved(Touch *touch, Event *event);
	void onTouchEnded(Touch *touch, Event *event);
	void onKeyPressed(EventKeyboard::KeyCode code, Event* event);
	void onKeyReleased(EventKeyboard::KeyCode code, Event* event);

	void update(float f);
	void addEnemy();
	void newEnemy();
	void meet(EventCustom* event);
	void gameStart();
	void gameOver();

	void movePlayer(char c);
	void movePlayerByMouse(Vec2 touch);
	
	bool isGameover;
	bool isMove;
	bool isClick;
	char movekey;
	Size visibleSize;
	Vec2 mousePosition;
	Sprite* player;
	list<Sprite*> enemies;
	list<Sprite*> sweets;
	Label* scoreLabel;
	int score;
};



#endif