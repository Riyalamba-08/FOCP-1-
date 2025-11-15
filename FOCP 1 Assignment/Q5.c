#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the coordinates (x y): ");
    scanf("%d %d", &x, &y);
    if (x>0 && y>0) {
        printf("The point (%d, %d) lies in 1st Quadrant\n", x, y);
    }
    else if (x<0 && y>0) {
        printf("The point (%d, %d) lies in 2nd Quadrant\n", x, y);
    }
    else if (x<0 && y<0) {
        printf("The point (%d, %d) lies in 3rd Quadrant\n", x, y);
    }
    else if (x>0 && y<0) {
        printf("The point (%d, %d) lies in 4th Quadrant\n", x, y);
    }
    else if (x==0 && y==0) {
        printf("The point is at the Origin.\n", x,y);
    }
  
    return 0;
}
