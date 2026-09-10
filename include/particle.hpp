#include "enums.hpp"
#include "vec3.hpp"

class Particle
{
private:
    PType type;
    Vec3<float> position;
    float kineticEnergy;
    Vec3<float> direction;

public:
    Particle(
        PType _type,
        Vec3<float> _position={0.0f, 0.0f, 0.0f},
        float _kineticEnergy=0.0f,
        Vec3<float> _direction={0.0f, 0.0f, 0.0f}
    ) :
        type(_type),
        position(_position),
        kineticEnergy(_kineticEnergy),
        direction(_direction) {}
};
