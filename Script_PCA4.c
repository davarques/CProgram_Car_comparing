#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_FILE_NAME 20
#define MAX_MODEL 42

typedef struct {
    char model[MAX_MODEL];
    int power;
    float consumption;
    int price;
} tCar;

int main() {
    tCar car1 = {"", 0, 0.0F, 0};
    tCar car2 = {"", 0, 0.0F, 0};
    char fileName1[MAX_FILE_NAME] = "";
    char fileName2[MAX_FILE_NAME] = "";
    FILE* file1 = NULL;
    FILE* file2 = NULL;
    float ratio1 = 0.0F;
    float ratio2 = 0.0F;
    bool car1IsBetter = false;

    /* Step 1: read the first car */
    printf("FILENAME1?\n");
    scanf("%s", fileName1);
    file1 = fopen(fileName1, "r");
    fscanf(file1, "%s %d %f %d", car1.model, &car1.power, &car1.consumption, &car1.price);
    fclose(file1);

    /* Step 1: read the second car */
    printf("FILENAME2?\n");
    scanf("%s", fileName2);
    file2 = fopen(fileName2, "r");
    fscanf(file2, "%s %d %f %d", car2.model, &car2.power, &car2.consumption, &car2.price);
    fclose(file2);

    /* Step 2: power/price ratio of each car */
    ratio1 = (float)car1.power / (float)car1.price;
    ratio2 = (float)car2.power / (float)car2.price;

    /* Step 3: YOUR TURN, fill each condition */
    if (car1.consumption < car2.consumption) {
        car1IsBetter = true;
    } else if (car1.consumption > car2.consumption) {
        car1IsBetter = false;
    } else if (ratio1 > ratio2) {
        car1IsBetter = true;
    } else if (ratio1 < ratio2) {
        car1IsBetter = false;
    } else if (strcmp(car1.model, car2.model) < 0) {
        car1IsBetter = true;
    } else {
        car1IsBetter = false;
    }

    /* Temporary test */
    printf("car1IsBetter = %d\n", car1IsBetter);

    return 0;
}




