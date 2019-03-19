#include <stdio.h>
#include <math.h>                  // Note: Needed for math functions in part (3)

int main(void) {
    double wallHeight;
    double wallWidth;
    double wallArea;
    const double PAINT = 350.00;
    int cansNeeded;

    printf("Enter wall height (feet):\n");
    scanf("%lf", &wallHeight);

    printf("Enter wall width (feet):\n");
    scanf("%lf", &wallWidth);

    // Calculate and output wall area
    wallArea = wallHeight * wallWidth;
    printf("Wall area: %lf square feet\n", wallArea);

    printf("Paint needed: %lf gallons\n", (wallArea / PAINT));

    cansNeeded = (wallArea + (PAINT - 1)) / PAINT;
    printf("Cans needed: %d can(s)\n", cansNeeded);

    return 0;
}