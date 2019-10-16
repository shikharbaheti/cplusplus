#include <cstdlib>
#include <cmath>
using namespace std;
using std::sqrt;

double approx_pi(int seed, int n) {
    // seed the random number generator
    srand(seed);
    int didHitTheBoard = 0;
    double pi;
    double radius;
    for (int i = 0; i < n; i ++) {
    double x = static_cast<double>(rand()) / RAND_MAX;
    double y = static_cast<double>(rand()) / RAND_MAX;
    radius = sqrt(pow(x, 2) + pow(y, 2));
    if (radius <= 1) {
        ++didHitTheBoard;
        }
    }
    pi = 4 * (didHitTheBoard / (double) n);
    // TODO(student): implement the rest.
    // simulate the dart-throwing process
    // estimate the area of the quadrant
    // estimate the value of pi
    // return the estimated value of pi
    return pi;
}
