// Particle name
enum class PName
{
    ALPHA,
    BETA,
    GAMMA,
    NEUTRON,
    PROTON
};

// Particle type
struct PType
{
    PName name;
    float mass;

    PType(PName _name, float _mass) :
        name(_name), mass(_mass) {}
};

namespace Particles
{
    const PType ALPHA = PType{PName::ALPHA, 6.64e-27f};
    const PType BETA = PType{PName::BETA, 9.11e-31f};
    const PType GAMMA = PType{PName::GAMMA, 0.0f};
    const PType NEUTRON = PType{PName::NEUTRON, 1.68e-27f};
    const PType PROTON = PType{PName::PROTON, 1.67e-27f};
};