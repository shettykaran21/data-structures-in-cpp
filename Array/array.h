#ifndef ARRAY_H
#define ARRAY_H

class Array {
  private:
  int *A;
  int size;
  int length;

  public:
  Array(int);
  int getLength();
  int getSize();
  int *getA();
  void setA(int *);
  void setLength(int);
  void setSize(int);

  void display();
  void increase_length();
  void append(int);
  void insert(int, int);
  void delete_at(int);
  int search(int);
  void swap(int *, int *);
  int binary_search(int);
  int get(int);
  void set(int, int);
  int max();
  int min();
  int sum();
  double avg();
  void reverse();
  void reverse2();
  void left_shift();
  void right_shift();
  void left_rotation();
  void right_rotation();
  void insert_in_sorted(int);
  void check_sorted();
  void negative_one_side();
};

#endif