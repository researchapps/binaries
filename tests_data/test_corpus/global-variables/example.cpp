int inty = 0;
bool booley = true;

// external linkage and global scope - will be included
long double doubley = 1.0;

// internal linkage variable (won't be included)
static int inttwo = 2;

// These are previously from const
const double pi = 3.14159;
const char newline = '\n';

extern int intyterny;

struct structy {
    int one;
    double two;
    double three;
};

structy thestructure;
extern structy externstructy;

void foo() {
  intyterny = 1;
  externstructy.one = 1;
  thestructure.one = 2;
}

