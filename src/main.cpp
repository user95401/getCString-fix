
#include <Geode/Geode.hpp>
using namespace geode::prelude;

//(cocos2d::CCString::getCString 
#include <Geode/modify/CCString.hpp>
class $modify(CCString) {
    const char* getCString() {
        //log::debug("{}(int:{})->{}", this, (int)this, __func__);
        if ((int)this == 0) log::error("{}(int:{})->{}", this, (int)this, __func__);
        return (int)this != 0 ? CCString::getCString() : CCString::createWithFormat("")->getCString();
    }
};

$execute{
    //CCMessageBox(getMod()->getRuntimeInfo().dump().c_str(), (getMod()->getID() + " is loaded").c_str());
}