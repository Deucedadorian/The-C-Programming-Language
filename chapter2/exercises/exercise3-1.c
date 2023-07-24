#include <stdio.h>
#include <time.h>

int binsearch(int x, int v[], int n);

int binsearch2(int x, int v[], int n);

int main() {
    int v[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    clock_t start, end;
    double cpu_time_used;
    double cpu_time_used2;

    start = clock();
    binsearch(10, v, 20);
    end = clock();
    cpu_time_used = ((double) (end - start));

    start = clock();
    binsearch2(10, v, 20);
    end = clock();
    cpu_time_used2 = ((double) (end - start));

    printf("two tests in loop takes %f seconds\n", cpu_time_used);
    printf("one test in loop takes %f seconds\n", cpu_time_used2);
}

int binsearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low+high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else 
            return mid;
    }
    return -1;
}

int binsearch2(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    while(low <= high && x != v[mid]) {
        if (x < v[mid])
            high = mid + 1;
        else
            low = mid - 1;
        mid = (low + high) / 2;
    }
    if (x == v[mid])
        return mid;
    else 
        return -1;
}
