struct A {
 int x;
};

struct B {
 double y;
};

struct C {
 float z;
};

struct D: A, B, C {
 char d;
};

int func(struct A a, struct B * b, struct C c, struct D d) {
  return 1;
}
