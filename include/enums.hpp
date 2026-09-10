

// Particle name
enum class PName
{
    ALPHA,
    BETA,
    GAMMA,
    NEUTRON
};

// Particle type
struct PType
{
    PName name;
    float mass;

    PType(PName _name, float _mass) :
        name(_name), mass(_mass) {}
};
