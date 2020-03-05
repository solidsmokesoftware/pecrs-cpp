// Vector datatype.
struct Vector {
  Vector(double, double);
  //Vector(int, int);
  double x;
  double y;
};

Vector::Vector(double xi, double yi) {
  x = xi;
  y = yi;
};

Vector operator+ (const Vector& other) {
  x += other.x;
  y += other.y;
};

Vector operator+ (double scalar) {
  x += scalar;
  y += scalar;
};

Vector operator- () {
  x = -x;
  y = -y;
};

Vector operator- (const Vector& other) {
  x -= other.x;
  y -= other.y;
};

Vector operator- (double scalar) {
  x -= scalar;
  y -= scalar;
};

Vector operator* (const Vector& other) {
  x *= other.x;
  y *= other.y;
};

Vector operator- (double scalar) {
  x *= scalar;
  y *= scalar;
};

Vector operator/ (const Vector& other) {
  x /= other.x;
  y /= other.y;
};

Vector operator- (double scalar) {
  x /= scalar;
  y /= scalar;
};

bool Vector operator== (const Vector& other) {
  if (x == other.x && y == other.y) {
    return true;
  };
  else {
    return false;
  };
};

bool Vector operator== (double xi, double yi) {
  if (x == xi && y == yi) {
    return true;
  };
  else {
    return false;
  };
};

bool Vector operator!= (const Vector& other) {
  if (x != other.x && y != other.y) {
    return true;
  };
  else {
    return false;
  };
};

bool Vector operator== (double xi, double yi) {
  if (x == xi && y == yi) {
    return true;
  };
  else {
    return false;
  };
};

double Vector::dot(Vector other) {
  return x * other. x + y * other.y;
};

double Vector::cross(Vector other) {
  return x * other.y - y * other.x;
};

double Vector::mag_square() {
  return x * x + y * y;
};

double Vector::mag() {
  return sqrt(mag_square());
};

double Vector::angle() {
  return atan2(x, y);
}

void Vector::normal() {
  len = mag_square();
  if (len != 0) {
    len = sqrt(len);
    x /= len;
    y /= len;
  };
  else {
    x = 0;
    y = 0;
  };
};

double Vector::dist_square(double xi, double yi) {
  xd = x - xi;
  yd = y - yi;
  return xd * xd + yd * yd;
};

double Vector::dist_square(Vector other) {
  return dist_square(other.x, other.y);
};

double Vector::dist(double x, double y) {
  return sqrt(dist_square(x, y));
};

double Vector::dist(Vector other) {
  return sqrt(dist_square(other.x, other.y));
};

double Vector::angle(Vector other) {
  return atan2(cross(other), dot(other));
};

double Vector::anglepoint(Vector other) {
  return atan2(y - other.y, x - other.x);
}

void Vector::abs() {
  x = abs(x);
  y = abs(y);
};

Vector Vector::project(Vector other) {
  return other * (dot(other) / other.mag_square());
};

void Vector::clamp(min : double, mag : double) {
  if (x < min) {
    x = min;
  };
  else {
    if (x > max) {
      x = max;
    };
  };

  if (y < min) {
    y = min;
  };
  else {
    if (y > max) {
      y = max;
    };
  };
};

void Vector::move(Vector other, double delta) {
  x = x + other.x * delta;
  y = y + other.y * delta;
};

String Vector::to_s() {
  return String(int(x), int(y));
};
