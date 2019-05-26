#include "borderColorPicker.h"

borderColorPicker::borderColorPicker(HSLAPixel fillColor, PNG & img, double tolerance,
  HSLAPixel center)
{
/* Your code here! */
    color = fillColor;
    im = img;
    tol = tolerance;
    ctr = center;
}

HSLAPixel borderColorPicker::operator()(int x, int y)
{

/* Your code here! */
    // HSLAPixel* pixel = new HSLAPixel();
    if(im.width() - x <= 3 || im.height() - y <= 3 || x < 3 || y < 3) {
      return color;
    }

    for (int x_diff = -3; x_diff <= 3; x_diff ++) {
      for (int y_diff = -3; y_diff <= 3; y_diff ++) {
        if (x_diff*x_diff + y_diff*y_diff > 9)
          continue;
        if (ctr.dist(*im.getPixel(x + x_diff, y + y_diff)) > tol) {
          return color;
        }
      }
    }
    return *im.getPixel(x,y);
}
