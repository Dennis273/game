#include "game.h"

cocos2d::Scene * Game::createScene()
{
	auto scene = Scene::create();
	auto layer = Game::create();
	scene->addChild(layer);
	return scene;
}

bool Game::init()
{
	if (!Layer::init()) {
		return false;
	}
	isGameover = false;
	isMove = false;
	isClick = false;
	visibleSize = Director::getInstance()->getVisibleSize();

	// ±³¾°Í¼Æ¬
	auto background = Sprite::create();
	background->setPosition(visibleSize / 2);
	background->setScale(visibleSize.width / background->getContentSize().width, visibleSize.height / background->getContentSize().height);
	this->addChild(background, 0);

	// Íæ¼Ò
	player = Sprite::create();
	player->setPosition(visibleSize.width / 2, visibleSize.height / 2);
	this->addChild(player, 1);

	// ·ÖÊý
	scoreLabel = Label::createWithTTF("Score: 0", "fonts/?", 20);
	scoreLabel->setPosition(visibleSize.width - 50, visibleSize.height - 60);
	this->addChild(scoreLabel, 4);

	preloadMusic();
	playBackgroundMusic();

	addTouchListener();
	addKeyboardListener();
	addCustomListener();

	schedule(schedule_selector(Game::update), 0.04f, kRepeatForever, 0);

	return true;
}

void Game::addTouchListener()
{
}

void Game::addKeyboardListener()
{
}

void Game::addCustomListener()
{
}

bool Game::onTouchBegan(Touch * touch, Event * event)
{
	return false;
}

void Game::onTouchMoved(Touch * touch, Event * event)
{
}

void Game::onTouchEnded(Touch * touch, Event * event)
{
}

void Game::onKeyPressed(EventKeyboard::KeyCode code, Event * event)
{
}

void Game::onKeyReleased(EventKeyboard::KeyCode code, Event * event)
{
}

void Game::update(float f)
{
	if (isGameover) return;
}

void Game::addEnemy()
{
}

void Game::newEnemy()
{
}

void Game::meet(EventCustom * event)
{
}

void Game::gameStart()
{
}

void Game::gameOver()
{
}

void Game::movePlayer(char c)
{
}

void Game::movePlayerByMouse(Vec2 touch)
{
}

void Game::preloadMusic()
{
}

void Game::playBackgroundMusic()
{
}
