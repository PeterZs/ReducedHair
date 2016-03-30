#ifndef _OFX_HAIR_PARTICLE_
#define _OFX_HAIR_PARTICLE_

#include "ofMain.h"

class ofxHairParticle
{
public:

	ofxHairParticle();
	ofxHairParticle(ofVec3f position, float m);
	ofVec3f position;
	ofVec3f position0;
	ofVec3f tmp_position;
	ofVec3f forces;
	ofVec3f velocity;
	ofVec3f collisionF;
	ofVec3f d;
	ofColor color;
	ofColor collision_color;

	ofQuaternion global_rotation;
	ofQuaternion global_rotation0;
	ofQuaternion local_rotation;
	ofQuaternion local_rotation0;
	ofVec3f global_trans;
	ofVec3f global_trans0;
	ofVec3f local_trans;
	ofVec3f local_trans0;

	ofVec3f offset;
	ofxHairParticle *parent;
	ofxHairParticle *child;
	float mass;
	float inv_mass;
	bool enabled;

	bool isParent;
	bool isSite;
};

#endif