#ifndef IMAGE_H
#define IMAGE_H

#include <string>
#include "Pixel.h"

/*
Rule of three:
1) copy constructor
2) copy assignment
3) 
*/

class Image {
  Pixel** image;
  unsigned int width; // columns
  unsigned int height; // rows
  std::string filename;
  
public:
  Image();
  ~Image(){
    clear();
  };
  Image(std::string filename);
  Image(unsigned int width, unsigned int height);
  Image(const Image& oldOne);
  Image& operator=(const Image& oldOne);
  
  Pixel*& operator[](unsigned int column);
  const Pixel* operator[](unsigned int column) const;
  unsigned int getWidth();
  unsigned int getHeight();
  
  void makeGreyscale();
  void makeSepia();
  void addColor(Pixel p);
  
  void output(std::string filename);

private:
  void load(std::string filename);
  void allocateImage(unsigned int width, unsigned int height);
  void clear();
};

#endif