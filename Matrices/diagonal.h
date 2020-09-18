#ifndef DIAGONAL_H
#define DIAGONAL_H

class Diagonal {
 private:
  int *A;
  int length;

 public:
  Diagonal(int);

  void set(int, int, int);
  int get(int, int);
  void display();

  void setA(int *);
  int *getA();
  void setLength(int);
  int getLength();
};

#endif