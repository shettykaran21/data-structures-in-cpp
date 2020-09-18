#ifndef DIAGONAL_H
#define DIAGONAL_H

class Diagonal {
 private:
  int *A;
  int length;

 public:
  Diagonal(int);

  void Set(int, int, int);
  int Get(int, int);
  void Display();

  void set_A(int *);
  int *get_A();
  void set_length(int);
  int get_length();
};

#endif