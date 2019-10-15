#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cmath>
#include "functions.h"
using namespace std;

Pixel** createImage(int width, int height) {
  cout << "Start createImage... " << endl;
  // Create a one dimensional array on the heap of pointers to Pixels 
  //    that has width elements (i.e. the number of columns)
  Pixel** image = new Pixel*[width];
  bool fail = false;
  for (int i=0; i < width; ++i) { // loop through each column
    // assign that column to a one dimensional array on the heap of Pixels
    //  that has height elements (i.e. the number of rows)
    image[i] = new Pixel[height];
    
    if (image[i] == nullptr) { // failed to allocate
      fail = true;
    }
  }
  
  if (fail) { // if any allocation fails, clean up and avoid memory leak
    // deallocate any arrays created in for loop
    for (int i=0; i < width; ++i) {
      delete [] image[i]; // deleting nullptr is not a problem
    }
    delete [] image; // dlete array of pointers
    return nullptr;
  }
  
  // initialize cells
  //cout << "Initializing cells..." << endl;
  for (int row=0; row<height; ++row) {
    for (int col=0; col<width; ++col) {
      //cout << "(" << col << ", " << row << ")" << endl;
      image[col][row] = { 0, 0, 0 };
    }
  }
  cout << "End createImage... " << endl;
  return image;
}

void deleteImage(Pixel** image, int width) {
  cout << "Start deleteImage..." << endl;
  // avoid memory leak by deleting the array
  for (int i=0; i<width; ++i) {
    delete [] image[i]; // delete each individual array placed on the heap
  }
  delete [] image;
  image = nullptr;
}

// implement for part 1

int* createSeam(int length) {
  int* seam = new int[length];
  return seam;
}

void deleteSeam(int* seam) {
  delete [] seam;
}

bool loadImage(string filename, Pixel** image, int width, int height) {
  ifstream ifs (filename);
  if (!ifs.is_open()) {
    cout << "Error: failed to open input file - " << filename << endl;
    return false;
  }
  char type[3];
  ifs >> type;
  if ((toupper(type[0]) != 'P') || (type[1] != '3')) {
    cout << "Error: type is " << type << " instead of P3" << endl;
    return false;
  }
  int w = 0, h = 0;
  ifs >> w;
  ifs >> h;

  if (!ifs.good()){
    cout << "Error: read non-integer value" << endl;
  }

  if (h <= 0){
    cout << "Error: height must be greater than 0. You entered " << h << endl;
  }
  if (w <= 0){
    cout << "Error: width must be greater than 0. You entered " << w << endl;
  }
  if (w != width) {   
    cout << "Error: input width (" << width << ") does not match value in file (" << w << ")" << endl;
    return false;
  }
  if (h != height) {
    cout << "Error: input height (" << height << ") does not match value in file (" << h << ")" <<  endl;
    return false;
  }
  int colorMax = 0;
  ifs >> colorMax;
  if (colorMax != 255) {
    cout << "Error: file is not using RGB color values." << endl;
    return false;
  }
  int counter;
  int expected;
  for (int j = 0; j < height; j ++){
    for (int i = 0; i < width; i++){
       ifs >> image[i][j].r;
       if (image[i][j].r < 0 || image[i][j].r > 255){
         cout << "Error: invalid color value " << image[i][j].r << endl;
       }
       ifs >> image[i][j].g;
       if (image[i][j].g < 0 || image[i][j].g > 255){
         cout << "Error: invalid color value " << image[i][j].g << endl;
       }
       ifs >> image[i][j].b;  
       if (image[i][j].b < 0 || image[i][j].b > 255){
         cout << "Error: invalid color value " << image[i][j].b << endl;
       } 
      counter++;
    }
  }
  return true;
}

bool outputImage(string filename, Pixel** image, int width, int height) {
  ofstream ofs (filename);
  if (!ofs.is_open()) {
    cout << "Error: failed to open output file: " << filename << endl;
  }
  ofs << "P3" << " " << endl;
  ofs << width << " " << height << endl;
  ofs << "255" << endl;
  for (int j = 0; j < height; j++){
    for (int i = 0; i < width; i++){
       ofs << image[i][j].r << " ";
       ofs << image[i][j].g << " ";
       ofs << image[i][j].b << " ";
    }
  }
  return true;
}

int energy(Pixel** image, int x, int y, int width, int height) { 
  int energyofPixel;
  int xGradient, yGradient;
  int xR, xG, xB;
  int yR, yG, yB;
  int x_B, x_A;
  int y_B, y_A;

  x_B = x - 1;
  x_A = x + 1;
  y_B = y - 1;
  y_A = y + 1;

  if (x_B < 0){
    x_B = width - 1;
  }

  if (y_B < 0){
    y_B = height - 1; 
  }

  if (x_A >= width){
    x_A = 0; // TRIED 0, and 1, and width.
  }

  if (y_A >= height){
    y_A = 0; // TRIED 0, and 1, and height. 
  }

  xR = image[x_B][y].r - image[x_A][y].r;
  xG = image[x_B][y].g - image[x_A][y].g;
  xB = image[x_B][y].b - image[x_A][y].b;
  
  yR = image[x][y_B].r - image[x][y_A].r;
  yG = image[x][y_B].g - image[x][y_A].g;
  yB = image[x][y_B].b - image[x][y_A].b;

  xGradient = pow(xR, 2) + pow(xG, 2) + pow(xB, 2);
  yGradient = pow(yR, 2) + pow(yG, 2) + pow(yB, 2);

  energyofPixel = xGradient + yGradient;
  return energyofPixel;
}
