//
//  Particle.cpp
//  ParticleNParcel
//
//  Created by lawsos2 on 9/17/19.
//

#include "Particle.hpp"

Particle::Particle() {
    Particle(ofColor::hotPink,
             ofVec3f(1,1,1),
             ofVec3f(0,0,0),
             ofVec3f(ofGetWidth()/2, ofGetHeight()/2, 0),
             ofVec3f(0,0,0));
}

Particle::Particle(ofColor c,
                     ofVec3f s,
                     ofVec3f v,
                     ofVec3f p,
                     ofVec3f a
                     ) {
    color = c;
    scale = s;
    position = p;
    velocity = v;
    acceleration = a;
    lifespan = 0.0;
}

void Particle::update(float deltaTime) {
    lifespan += deltaTime;
    velocity += acceleration;
    velocity.limit(50);
    position += velocity;
}

void Particle::draw() {
    ofSetColor(color);
    ofPushMatrix();
    ofTranslate(position);
    ofDrawBox(scale.x, scale.y, scale.z);
    ofPopMatrix();
}

