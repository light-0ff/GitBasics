#pragma once
#include <iostream>
using namespace std;
#define tab "\t"
const int ROWS = 4;
const int COLS = 5;

void Print(int Arr[], const int n);
void Print(float Arr[], const int n);
void Print(double Arr[], const int n);
void Print(char Arr[], const int n);
////////////////////////////////////////////////////
int sum(int Arr[], const int n);
float sum(float Arr[], const int n);
double sum(double Arr[], const int n);
char sum(char Arr[], const int n);
///////////////////////////////////////////////////
double avg(int Arr[], const int n);
double avg(float Arr[], const int n);
double avg(double Arr[], const int n);
double avg(char Arr[], const int n);
///////////////////////////////////////////////////
int minValueIn(int Arr[], const int n);
float minValueIn(float Arr[], const int n);
double minValueIn(double Arr[], const int n);
char minValueIn(char Arr[], const int n);
/////////////////////////////////////////////////
int maxValueIn(int Arr[], const int n);
float maxValueIn(float Arr[], const int n);
double maxValueIn(double Arr[], const int n);
char maxValueIn(char Arr[], const int n);
/////////////////////////////////////////////////
void ShiftRight(int Arr[], int Mas[], const int n, int m);
void ShiftLeft(int Arr[], int Mas[], const int n, int m);
////////////////////////////////////////////////
void FillRand(int Arr[], const int n);

void FillRand(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float Arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double Arr[ROWS][COLS], const int ROWS, const int COLS);
/////////
void Print(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float Arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double Arr[ROWS][COLS], const int ROWS, const int COLS);
//////////
int sum(int Arr[ROWS][COLS], const int ROWS, const int COLS);
float sum(float Arr[ROWS][COLS], const int ROWS, const int COLS);
double sum(double Arr[ROWS][COLS], const int ROWS, const int COLS);
/////////
double avg(int Arr[ROWS][COLS], const int ROWS, const int COLS);
double avg(float Arr[ROWS][COLS], const int ROWS, const int COLS);
double avg(double Arr[ROWS][COLS], const int ROWS, const int COLS);
/////////
int minValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(float Arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS);
////////
int maxValueIn(int Arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(float Arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(double Arr[ROWS][COLS], const int ROWS, const int COLS);
////////
void sort(int Arr[ROWS][COLS], const int ROWS, const int COLS);
void sort(float Arr[ROWS][COLS], const int ROWS, const int COLS);
void sort(double Arr[ROWS][COLS], const int ROWS, const int COLS);