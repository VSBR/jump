#include "GameScene.h"
#include "SimpleAudioEngine.h"

using namespace cocos2d;
using namespace CocosDenshion;
using namespace std;

CCScene* GameScene::scene(){
    CCScene* scene = GameScene::create();
    GameScene* layer = GameScene::create();
    scene->addChild(layer);
    return scene;
}

//init
bool GameScene::init()
{
    if(!CCLayer::init())
    {
        return false;
    }
    return true;
}