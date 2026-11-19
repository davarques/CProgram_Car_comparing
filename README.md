# Car Comparison

<img width="1200" height="300" alt="banner" src="https://github.com/user-attachments/assets/5b55b6a8-c629-405f-932a-7f72b29a0214" />


Program in C. It reads the data of two cars from two text files and prints which one is better.

## What it does

- Stores each car in a record (`struct`) with the model name, power, consumption per 100 km and price.
- Reads one car from each file, using the file names typed on the keyboard.
- Compares the two cars with these rules, in order:

| Order | Rule | Better car |
| --- | --- | --- |
| 1 | Consumption per 100 km | The lower one |
| 2 | Power / price ratio (if tied) | The higher one |
| 3 | Model name (if still tied) | The one that comes first alphabetically |

- Prints the model name of the better car.

## Concepts used

Records (`typedef struct`), reading files with `fopen` and `fscanf`, `if / else if` chains, type casting (`(float)`), `bool`, and string comparison with `strcmp`.

## Input file format

One line per file: model (no spaces), power in CV, consumption in liters per 100 km, price.

```
Cupra_Leon_eTSI_1.5 150 6.4 34100
```

## How to run

1. Compile: `gcc main.c -o cars`
2. Run: `./cars`
3. Enter the two file names when asked, for example `car1.txt` and `car2.txt`.

## Example

With `car1.txt` = `Cupra_Leon_eTSI_1.5 150 6.4 34100` and `car2.txt` = `BMW_X1_Hri_2.4 220 7.2 42500`:

```
FILENAME1?
car1.txt
FILENAME2?
car2.txt
THE BEST CAR IS Cupra_Leon_eTSI_1.5
```
