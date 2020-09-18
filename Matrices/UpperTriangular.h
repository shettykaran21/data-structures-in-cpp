#ifndef UPPER_TRIANHULR
#define UPPER_TRIANHULR

class UpperTriangular {
 private:
  int *A;
  int length;

 public:
  UpperTriangular(int);

  void Set(int, int, int);
  int Get(int, int);
  void Display();

  void set_A(int *);
  int *get_A();
  void set_length(int);
  int get_length();
};

#endif