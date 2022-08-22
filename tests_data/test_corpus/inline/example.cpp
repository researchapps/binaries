int foo(int x) { return x + 1; }

__attribute__((always_inline))
static double bar(double d) { return d + foo(d); };

// Cube does not appear in the dwarf
inline int cube(int s){
    return s*s*s;
}

int start(double d) {
    double dd = bar(d);
    return dd + 1;
}
