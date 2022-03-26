class Coordinates {
public:
    float x;
    float y;
    float z;
public:
    Coordinates(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    Coordinates(const Coordinates &c) {
        x = c.x;
        y = c.y;
        z = c.z;
    }
};

Coordinates operator* (const int& number, Coordinates& n) {
    Coordinates r = n;
    r.x = n.x * number;
    r.y = n.y * number;
    r.z = n.z * number;
    return r;
}

Coordinates operator+ (Coordinates& h_1, Coordinates& h_2) {
    Coordinates h = h_1;
    h.x += h_2.x;
    h.y += h_2.y;
    h.z += h_2.z;
    return h;
}

Coordinates operator* (Coordinates& a, Coordinates& b) {
    Coordinates h;
    h.x += a.y*b.z - a.z*b.y;
    h.y += a.z*b.x - a.x*b.z;
    h.z += a.x*b.y - a.y*b.x;
    return h;
}