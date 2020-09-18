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
  void increaseLength();
  void append(int);
  void insert(int, int);
  void deleteAt(int);
  int search(int);
  void swap(int *, int *);
  int binarySearch(int);
  int get(int);
  void set(int, int);
  int max();
  int min();
  int sum();
  double avg();
  void reverse();
  void reverse2();
  void leftShift();
  void rightShift();
  void leftRotation();
  void rightRotation();
  void insertInSorted(int);
  void checkSorted();
  void negativeOneSide();
};

#endif