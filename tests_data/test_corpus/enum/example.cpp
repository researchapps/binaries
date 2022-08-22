enum Color { red, green, blue };

enum class ColorClassEnum : int { red=-77, blue=14, green=0 };
void foo(ColorClassEnum c) {}

Color print_color(Color r){
  return r;
}

// Enums with different sizes underlying types
enum class CharEnum : char {h='h', i='i', j='j'};
enum class BoolEnum : bool { a=true, b=false};
enum class SizeEnum : unsigned long { a=1, b=2, c=3};

void enumfunc(CharEnum c) {}
void boolfunc(BoolEnum c) {}
void sizefunc(SizeEnum c) {}


