#include "particle.hpp"

PType Particle::getType()
{
    return type;
}

Vec3<float> Particle::getPosition()
{
    return position;
}

void Particle::setPosition(Vec3<float> _position)
{
    position = _position;
}

float Particle::getKineticEnergy()
{
    return kineticEnergy;
}

void Particle::setKineticEnergy(float _kineticEnergy)
{
    kineticEnergy = _kineticEnergy;
}

Vec3<float> Particle::getMomentumDirection()
{
    return momentumDirection;
}

void Particle::setMomentumDirection(Vec3<float> _momentumDirection)
{
    momentumDirection = _momentumDirection;
}

float Particle::getMomentumMagnitude()
{
    return momentumMagnitude;
}

void Particle::setMomentumMagnitude(float _momentumMagnitude)
{
    momentumMagnitude = _momentumMagnitude;
}

unsigned int Particle::getNParticles()
{
    return nParticles;
}

void Particle::setNParticles(unsigned int _nParticles)
{
    nParticles = _nParticles;
}