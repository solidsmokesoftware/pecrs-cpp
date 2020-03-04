// Abstract Base Shape that other shapes ext} from.
// Shapes are simple data structures that describe the physical properties of an body to a Collider.
// Note that shapes do not have a position, thus all bodies with the same shape can use the same Shape instance
struct Shape {
};

// A Rectangle
// Treated as a Axis-Aligned Bounding Boxes by the Collider.
struct Rect : Shape {
  Rect(int, int);
  int w;
  int h;
};

Rect::Rect(int width, int height) {
  w = width;
  h = height;
};

// A Circle
// Radius, ext}ing from the center of the circle
struct Circle : Shape {
  Circle(int);
  int r;
};

Circle::Circle(int radius) {
  r = radius;
};
