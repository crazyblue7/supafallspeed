#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>
#include <Geode/binding/PlayerObject.hpp>
#include <Geode/binding/PlayLayer.hpp>
using namespace geode::prelude;

class $modify(PlayerObject) {
	virtual void update(float dt) {
		update(dt);
		if(getYVelocity() < -1) {
			if ( m_gravity == 1 ) {
				setYVelocity(100*dt,1);
			} else {
				setYVelocity(-100*dt,1);
			}
		}
		log::info("velocity i think is  {}!\n\nm_gravityMod is {}.\n\n", getYVelocity(), m_gravityMod);
		
	}
};
