#include <fstream>
using namespace std;

int main() {
    int width = 1844, height = 4096;
    ofstream file("gradient.ppm");
    file << "P3\n" << width << " " << height << "\n255\n";
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            int r = static_cast<int>(255 * x / width);
            //int g = static_cast<int>(255 * x / width);
            int g = 0;
            int b = static_cast<int>(255 * x / width);
            file<< r << " " << g << " " << b << " ";
        }
        file << "\n";
    }
    return 0;
}

