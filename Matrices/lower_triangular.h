#ifndef LOWER_TRIANGULAR_H
#define LOWER_TRIANGULAR_H

class LowerTriangular {
 private:
  int *A;
  int length;

 public:
  LowerTriangular(int);

  void Set(int, int, int);
  int Get(int, int);
  void Display();

  void set_A(int *);
  int *get_A();
  void set_length(int);
  int get_length();
};

#endif