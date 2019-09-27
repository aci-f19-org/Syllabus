//
//  Particle.hpp
//  ParticleNParcel
//
//  Created by lawsos2 on 9/17/19.
//

#ifndef Particle_hpp
#define Particle_hpp

#include "ofMain.h"

class Particle {
public:
    ofColor color;
    ofVec3f velocity;
    ofVec3f scale;
    ofVec3f position;
    ofVec3f acceleration;
    
    float lifespan;
    
    Particle();
    Particle(ofColor c,
             ofVec3f s,
             ofVec3f v,
             ofVec3f p,
             ofVec3f a
             );
    
    void update(float deltaTime);
    void draw(ofImage image);
    //a shape drawable
};

#endif /* Particle_hpp */
