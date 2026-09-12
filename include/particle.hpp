#ifndef PARTICLE_HPP
#define PARTICLE_HPP

#include "enums.hpp"
#include "vec3.hpp"

class Particle
{
private:
    PName type;
    PInfo properties;
    Vec3<float> position;
    float kineticEnergy;
    float momentumMagnitude;  // Magnitude of momentum
    Vec3<float> momentumDirection;  // Normalized direction of momentum
    unsigned int nParticles;

public:
    Particle(
        PName _type,
        Vec3<float> _position={0.0f, 0.0f, 0.0f},
        float _kineticEnergy=0.0f,
        float _momentumMagnitude=0.0f,
        Vec3<float> _momentumDirection={0.0f, 0.0f, 0.0f},
        unsigned int _nParticles = 1
    ) :
        type(_type),
        position(_position),
        kineticEnergy(_kineticEnergy),
        momentumMagnitude(_momentumMagnitude),
        momentumDirection(_momentumDirection),
        nParticles(_nParticles)
    {
        properties = particleProperties[static_cast<int>(_type)];
    }
    
    PName getType();
    PInfo getProperties();

    Vec3<float> getPosition();
    void setPosition(Vec3<float> _position);

    float getKineticEnergy();
    void setKineticEnergy(float _kineticEnergy);

    float getMomentumMagnitude();
    void setMomentumMagnitude(float _momentumMagnitude);

    Vec3<float> getMomentumDirection();
    void setMomentumDirection(Vec3<float> _momentumDirection);
    
    unsigned int getNParticles();
    void setNParticles(unsigned int _nParticles);
};

#endif // PARTICLE_HPP