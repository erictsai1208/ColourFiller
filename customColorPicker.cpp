#include "customColorPicker.h"

customColorPicker::customColorPicker(HSLAPixel fillColor, int dotSpacing)
{
/* your code here! */
    color = fillColor;
    spacing = dotSpacing;
}

HSLAPixel customColorPicker::operator()(int x, int y)
{
/* your code here! */
    HSLAPixel* pixel = new HSLAPixel();
    if(x%spacing == 0 && y%spacing == 0) {
      *pixel = color;
    }
    return *pixel;
}
