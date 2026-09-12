

template <typename T>
struct Vec3
{
    T x;
    T y;
    T z;

    Vec3(T _x=0, T _y=0, T _z=0):
        x(_x), y(_y), z(_z) {}
    
    // Vector addition
    Vec3<T> operator+(const Vec3<T>& other) const
    {
        return Vec3<T>(this->x + other.x, this->y + other.y, this->z + other.z);
    }

    void operator+=(const Vec3<T>& other)
    {
        this->x += other.x;
        this->y += other.y;
        this->z += other.z;
    }
    
    // Dot product
    T operator*(const Vec3<T>& other) const
    {
        return static_cast<T>(this->x * other.x + this->y * other.y + this->z * other.z);
    }

    void operator*=(const Vec3<T>& other)
    {
        this->x *= other.x;
        this->y *= other.y;
        this->z *= other.z;
    }

    // Cross product
    Vec3<T> operator^(const Vec3<T>& other) const
    {
        return Vec3<T>
        (
            this->x * other.y - this->y * other.x,
            this->y * other.z - this->z * other.y,
            this->z * other.x - this->x * other.z
        );
    }

    void operator^=(const Vec3<T>& other)
    {
        T newX = this->x * other.y - this->y * other.x;
        T newY = this->y * other.z - this->z * other.y;
        T newZ = this->z * other.x - this->x * other.z;

        this->x = newX;
        this->y = newY;
        this->z = newZ;
    }
};
