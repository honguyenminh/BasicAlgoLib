// Created by someone on 05/02/2021
#include <cmath>

namespace BasicCalculation
{
    class AreaOf {
        // Area of a rectangle given 2 side length, return -1 if invalid
        static int Rectangle (int sideA, int sideB) {
            if (sideA >= 0 && sideB >= 0) {
                return sideA * sideB;
            }
            else return -1;
        }
        // Double overload of above
        static double Rectangle (double sideA, double sideB) {
            if (sideA >= 0 && sideB >= 0) {
                return sideA * sideB;
            }
            else return -1;
        }

        // Area of a circle given the radius, return -1 if invalid
        static double Circle (int radius) {
            const double pi = 3.1415926535; // It's never too precise :)
            if (radius >= 0) {
                return (radius*radius) * pi;
            }
            else return -1;
        }
        // Double input overload of above
        static double Circle (double radius) {
            const double pi = 3.1415926535; // It's never too precise :)
            if (radius >= 0) {
                return (radius*radius) * pi;
            }
            else return -1;
        }

        // Area of a triangle given length of 3 sides, return -1 if invalid
        static double TriangleSides (int a, int b, int c) {
            // Check if triangle is valid
            if ((a > 0) && (b > 0) && (c > 0)) {
                if ((a+b>c) && (b+c>a) && (c+a>b)) {
                    int perimeter = a + b + c;
                    // Half the perimeter
                    double p = (double)perimeter / 2;
                    // Return value with Herong's formula
                    return std::sqrt(p * (p - a) * (p - b) * (p - c));
                }
                else return -1;
            }
            else return -1;
        }
    };
}