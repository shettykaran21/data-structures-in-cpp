#ifndef ARRAY_H
#define ARRAY_H

class Array {
 private:
  int *A;
  int length;

 public:
  Array(int);
  int getLength();
  int *getA();
  void setA(int *);
  void setLength(int);

  void display();
  void increaseLength();
  void append(int);
  void insert(int, int);
  void deleteAt(int);
  int search(int);
  void swap(int *, int *);
  int binarySearch(int);
  int rBinarySearch(int[], int, int, int);
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