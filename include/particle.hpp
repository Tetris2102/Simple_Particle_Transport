#include "enums.hpp"
#include "vec3.hpp"

class Particle
{
private:
    PType type;
    Vec3<float> position;
    float kineticEnergy;
    Vec3<float> direction;
    unsigned int nParticles;

public:
    Particle(
        PType _type,
        Vec3<float> _position={0.0f, 0.0f, 0.0f},
        float _kineticEnergy=0.0f,
        Vec3<float> _direction={0.0f, 0.0f, 0.0f},
        int _nParticles = 1
    ) :
        type(_type),
        position(_position),
        kineticEnergy(_kineticEnergy),
        direction(_direction),
        nParticles(_nParticles) {}
    
    PType getType();
    Vec3<float> getPosition();
    void setPosition(Vec3<float> _position);
    float getKineticEnergy();
    void setKineticEnergy(float _kineticEnergy);
    Vec3<float> getDirection();
    void setDirection(Vec3<float> _direction);
    unsigned int getNParticles();
    void setNParticles(unsigned int _nParticles);
};
