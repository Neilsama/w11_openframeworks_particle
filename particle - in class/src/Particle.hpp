//
//  Particle.hpp
//  particle - in class
//
//  Created by Neil on 11/1/16.
//
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include "ofMain.h"

class Particle{
public:
    Particle(ofVec2f position);
    
    void resetForces();
    void applyForce(ofVec2f force);
    void update(float multiplier);
    void draw();
    
    ofVec2f mPosition, mVelocity, mAcceleration;
    float mLifeSpan;
};


#endif /* Particle_hpp */
