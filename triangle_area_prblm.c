//You are given  triangles, specifically, their sides ai ,bi  and ci . 
//Print them in the same style but sorted by their areas from the smallest one to the largest one. 
//It is guaranteed that all the areas are different.
//The best way to calculate a area of a triangle with sides ,  and  is Heron's formula

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    double p = (a+b+c)/2;

    double arr[n];
    for(int i = 0 ; i < n; i++){
        arr[i] = sqrt(p*(p-tr->a)*(p-tr->b)*(p-tr->c));
    }
    for(int j = 0; j < n; j++){

        if(arr)
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}