#ifndef UPPER_TRIANGULAR
#define UPPER_TRIANGULAR

class UpperTriangular {
 private:
  int *A;
  int length;

 public:
  UpperTriangular(int);

  void set(int, int, int);
  int get(int, int);
  void display();

  void setA(int *);
  int *getA();
  void setLength(int);
  int getLength();
};

#endif