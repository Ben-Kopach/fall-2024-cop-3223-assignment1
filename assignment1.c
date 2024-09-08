#include <stdio.h>
#include <math.h>

// Define PI using #define as required
#define PI 3.14159

// Function prototypes
int main(int argc, char **argv);
void getCoordinates(double *x1, double *y1, double *x2, double *y2);
double calculateDistance(double x1, double y1, double x2, double y2);
double calculatePerimeter(double x1, double y1, double x2, double y2);
double calculateArea(double x1, double y1, double x2, double y2);
double calculateWidth(double x1, double y1, double x2, double y2);
double calculateHeight(double x1, double y1, double x2, double y2);

// Main function: Calls the other functions
int main(int argc, char **argv) {
    double x1, y1, x2, y2;

    // Get coordinates only once
    getCoordinates(&x1, &y1, &x2, &y2);

    // Calculate and display the distance between the two points
    double distance = calculateDistance(x1, y1, x2, y2);
    printf("\nThe distance between the two points is %.2f\n\n", distance);

    // Use the same coordinates for all calculations
    calculatePerimeter(x1, y1, x2, y2);
    calculateArea(x1, y1, x2, y2);
    calculateWidth(x1, y1, x2, y2);
    calculateHeight(x1, y1, x2, y2);

    return 0;
}

// Function to get coordinates from user
void getCoordinates(double *x1, double *y1, double *x2, double *y2) {
    printf("Enter coordinates for Point #1 (x1 y1): ");
    scanf("%lf %lf", x1, y1);
    printf("Enter coordinates for Point #2 (x2 y2): ");
    scanf("%lf %lf", x2, y2);
}

// Function to calculate the distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to calculate the perimeter of a circle based on the distance
double calculatePerimeter(double x1, double y1, double x2, double y2) {
    double distance = calculateDistance(x1, y1, x2, y2);
    double radius = distance / 2; // This is assuming distance is the diameter
    double perimeter = 2 * PI * radius;
    printf("The perimeter of the city encompassed by your request is %.2f\n\n", perimeter);
    return perimeter;
}

// Function to calculate the area of a circle based on the distance
double calculateArea(double x1, double y1, double x2, double y2) {
    double distance = calculateDistance(x1, y1, x2, y2);
    double radius = distance / 2;
    double area = PI * pow(radius, 2);
    printf("The area of the city encompassed by your request is %.2f\n\n", area);
    return area;
}

// Function to calculate width
double calculateWidth(double x1, double y1, double x2, double y2) {
    double width = calculateDistance(x1, y1, x2, y2);
    printf("The width of the city encompassed by your request is %.2f\n\n", width);
    return width;
}

// Function to calculate height
double calculateHeight(double x1, double y1, double x2, double y2) {
    double height = calculateDistance(x1, y1, x2, y2);
    printf("The height of the city encompassed by your request is %.f\n", height);
    return height;
}
