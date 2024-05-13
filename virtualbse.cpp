#include <iostream>

class Shape { // Base class
public:
  virtual void draw() const {
    std::cout << "Drawing a generic shape." << std::endl;
  }
};

class ColoredShape : virtual public Shape { // Virtual base class to avoid diamond problem
protected:
  std::string color;

public:
  ColoredShape(const std::string& c) : color(c) {}
};

class FilledShape : virtual public Shape { // Virtual base class to avoid diamond problem
protected:
  bool isFilled;

public:
  FilledShape(bool filled) : isFilled(filled) {}
};

class ColoredFilledRectangle : public ColoredShape, public FilledShape {
public:
  ColoredFilledRectangle(const std::string& c, bool filled) : ColoredShape(c), FilledShape(filled) {}

  void draw() const override {
    std::cout << "Drawing a " << (isFilled ? "filled" : "outlined") << " rectangle in " << color << " color." << std::endl;
  }
};

int main() {
  ColoredFilledRectangle rect("red", true);
  rect.draw(); // Calls the most specific draw() function

  return 0;
}
