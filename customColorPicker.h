/**
 * @file customColorPicker.h
 * Definition of a box color picker.
 *
 */
#ifndef CUSTOMCOLORPICKER_H
#define CUSTOMCOLORPICKER_H

#include "colorPicker.h"

class customColorPicker : public colorPicker
{
  public:
  
    customColorPicker(HSLAPixel fillColor, int dotSpacing);

    virtual HSLAPixel operator()(int x, int y);

  private:
    HSLAPixel color; /**< Color used for the box. */
    int spacing;     /**< Space between boxes. */
};

#endif
