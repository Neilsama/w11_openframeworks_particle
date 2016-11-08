//
//  ParticleSystem.hpp
//  particle - in class
//
//  Created by Neil on 11/1/16.
//
//

#ifndef ParticleSystem_hpp
#define ParticleSystem_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Particle.hpp"

class ParticleSystem{

public:
    ParticleSystem(ofVec2f position);
    void update(ofVec2f force);
    void draw();
    
    vector<Particle>    mParticleList;
    ofVec2f             mPosition;
    int                 mEmitRate;
    bool                mIsAddingParticles;
};



#endif /* ParticleSystem_hpp */
