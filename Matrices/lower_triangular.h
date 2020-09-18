#ifndef LOWER_TRIANGULAR_H
#define LOWER_TRIANGULAR_H

class LowerTriangular {
 private:
  int *A;
  int length;

 public:
  LowerTriangular(int);

  void set(int, int, int);
  int get(int, int);
  void display();

  void setA(int *);
  int *getA();
  void setLength(int);
  int getLength();
};

#endif