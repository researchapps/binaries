struct One {
  int x;
};

using one_t = One;

struct Two {
  one_t d;
  one_t *p;
  one_t &r;
};

using ptwo_t = Two*;
using rptwo_t = ptwo_t&;

// 'a' and 'b' have same type
void foo(ptwo_t a, Two* b) {}
void bar(ptwo_t& a, rptwo_t b){}
