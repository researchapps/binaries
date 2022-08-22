int foo(int x) { return x + 1; }
extern double bar(double d) { return d + foo(d); };

int start(double d) {
    double dd = bar(d);
    return dd + 1;
}

int main()
{
    foo(1.0);
    return 0;
}
