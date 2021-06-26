#include <stdio.h>
#include <stdlib.h>

#define MAX_TERMS 100
#define COMPARE(x, y) (x < y ? -1 : (x > y ? 1 : 0))

typedef struct {
  int coef;
  int expon;
} polynomial;

// shared memory for storing polynomials
polynomial terms[MAX_TERMS];
int avail = 0;

void polynomial_add(int, int, int, int, int*, int*);
void polynomial_print(int, int);
void attach(int, int);

int main() {

  // starta and finisha defines polynomial a
  int starta, finisha;
  int startb, finishb;
  int startc, finishc;

  starta = avail;
  terms[avail].expon = 1000; terms[avail].coef = 2; 
  avail++;
  terms[avail].expon = 0; terms[avail].coef = 1;
  finisha = avail;
  avail++;

  startb = avail;
  terms[avail].expon = 4; terms[avail].coef = 1;
  avail++;
  terms[avail].expon = 3; terms[avail].coef = 10;
  avail++;
  terms[avail].expon = 2; terms[avail].coef = 3;
  avail++;
  terms[avail].expon = 0; terms[avail].coef = 1;
  finishb = avail;
  avail++;

  polynomial_add(starta, finisha, startb, finishb, &startc, &finishc);

  polynomial_print(starta, finisha);
  polynomial_print(startb, finishb);
  polynomial_print(startc, finishc);

  return 0;
}

void polynomial_add(int starta, int finisha, int startb, int finishb, int *startd, int *finishd) {

	int coef=0;
	*startd = avail;

	while(starta<=finisha && startb<=finishb){
		switch(COMPARE(terms[starta].expon, terms[startb].expon)){
			case -1:
				attach(terms[startb].coef, terms[startb].expon);startb++;break;
			case 0:
				coef= terms[starta].coef + terms[startb].coef;if(coef)
					attach(coef, terms[starta].expon);
				starta++;startb++;break;
			case 1:
				attach(terms[starta].coef, terms[starta].expon);starta++;
		}
	}

	for(;starta<=finisha;starta++) attach(terms[starta].coef, terms[starta].expon);
	for(;startb<=finishb;startb++) attach(terms[startb].coef, terms[startb].expon);
	*finishd = avail-1;
}

void attach(int coefficient, int exponent) {
  /* add a new term to the polynomial */
  if(avail >= MAX_TERMS) {
    fprintf(stderr, "too many terms in the polynomial"); exit(1);
  }
  terms[avail].coef = coefficient;
  terms[avail++].expon = exponent;
}

void polynomial_print(int starta, int finisha) {
  int i;
  for(i = starta; i <= finisha; i++) {
    if(i == starta) printf("%dx^%d", terms[i].coef, terms[i].expon);
    else printf(" + %dx^%d", terms[i].coef, terms[i].expon);
  }
  printf("\n");
}






