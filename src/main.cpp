
#include <Geode/Geode.hpp>
using namespace geode::prelude;

//(cocos2d::CCString::getCString 
#include <Geode/modify/CCString.hpp>
class $modify(CCString) {
    const char* getCString() {
        //log::debug("{}(int:{})->{}", this, (int)this, __func__);
        return (int)this != 0 ? CCString::getCString() : CCString::createWithFormat("")->getCString();
    }
};