#pragma once


namespace XexUtils
{
namespace Math
{

// Struct to represent a four-component vector.
struct vec4
{
    vec4();
    vec4(float x, float y, float z, float w);

    union
    {
        struct
        {
            float x;
            float y;
            float z;
            float w;
        };
        struct
        {
            float r;
            float g;
            float b;
            float a;
        };
    };

    float magnitude() const;
    void normalize();

    void add(const vec4 &other);
    void substract(const vec4 &other);
    void multiply(const vec4 &other);
    void multiply(const float &multiplier);
    void divide(const vec4 &other);
    void divide(const float &divider);

    bool isNull() const;

    void operator-();

    bool operator==(const vec4 &other) const;
    bool operator!=(const vec4 &other) const;
    bool operator<(const vec4 &other) const;
    bool operator<=(const vec4 &other) const;
    bool operator>(const vec4 &other) const;
    bool operator>=(const vec4 &other) const;

    vec4 operator+(const vec4 &other) const;
    vec4 operator-(const vec4 &other) const;
    vec4 operator*(const vec4 &other) const;
    vec4 operator*(const float &multiplier) const;
    vec4 operator/(const vec4 &other) const;
    vec4 operator/(const float &divider) const;
};

}
}
