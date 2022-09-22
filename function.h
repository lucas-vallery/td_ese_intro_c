#pragma once

#include <stdlib.h>
#include <stdio.h>

#define TAB_SIZE sizeof(tab)

void printTab(int* tab);

void fillTab(int* tab, int size);

int tabMax(int* tab);

int tabMin(int* tab);

void bubbleSort(int* tab);
