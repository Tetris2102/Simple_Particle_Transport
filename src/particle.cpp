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

Vec3<float> Particle::getDirection()
{
    return direction;
}

void Particle::setDirection(Vec3<float> _direction)
{
    direction = _direction;
}

unsigned int Particle::getNParticles()
{
    return nParticles;
}

void Particle::setNParticles(unsigned int _nParticles)
{
    nParticles = _nParticles;
}