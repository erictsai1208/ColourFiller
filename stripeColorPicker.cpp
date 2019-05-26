#include "stripeColorPicker.h"

stripeColorPicker::stripeColorPicker(HSLAPixel fillColor, int stripeSpacing)
{
/* your code here! */
    color = fillColor;
    spacing = stripeSpacing;
}

HSLAPixel stripeColorPicker::operator()(int x, int y)
{
/* your code here! */
    HSLAPixel* pixel = new HSLAPixel();
    if(x%spacing == 0) {
      *pixel = color;
    }
    return *pixel;
}
