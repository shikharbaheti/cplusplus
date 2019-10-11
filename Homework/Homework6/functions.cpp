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
  return nullptr;
}

void deleteSeam(int* seam) {
}

bool loadImage(string filename, Pixel** image, int width, int height) {
  ifstream ifs (filename);
  if (!ifs.is_open()) {
    return false;
  }
  for (int j = 0; j < height; j ++) {
    for (int i = 0; i < width; i++) {
       ifs >> image[i][j].r;
       ifs >> image[i][j].g;
       ifs >> image[i][j].b;   
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



  // check if output stream opened successfully
  
  // output preamble
  
  // output pixels
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
  return 0;
}

// implement for part 2

// uncomment for part 2
/* 

int loadVerticalSeam(Pixel** image, int start_col, int width, int height, int* seam) {
  return 0;
}

int loadHorizontalSeam(Pixel** image, int start_row, int width, int height, int* seam) {
  return 0;
}

int* findMinVerticalSeam(Pixel** image, int width, int height) {
  return nullptr;
}

int* findMinHorizontalSeam(Pixel** image, int width, int height) {
  return nullptr;
}

void removeVerticalSeam(Pixel** image, int width, int height, int* verticalSeam) {
}

*/
void removeHorizontalSeam(Pixel** image, int width, int height, int* horizontalSeam) {
}
