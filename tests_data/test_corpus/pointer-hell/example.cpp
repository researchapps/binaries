struct Foo {
   int one;
   double two;
   char * three;
   Foo *f;
};
struct Bar {
  Foo f;
};
struct Baz {
  Foo *f;
};
struct Bax {
  Bar *b;
};
struct Bux {
  Baz *b;
};

void foo(Foo f){}
void bar(Bar b){}
void bar(Bar *b){}
void baz(Baz b){}
void baz(Baz *b){}
void bax(Bax b){}
void bax(Bax *b){}
void bux(Bux b){}
void bux(Bux *b){}
void foo(Foo *f){}


struct AnotherFoo {
   int one;
   double two;
   char * three;
   Foo *f;
};

int foo(AnotherFoo f) { return 0; }
AnotherFoo bar(AnotherFoo *f) { return *f; }

int struct_func(int one, Foo * two) {
    return one;
}
