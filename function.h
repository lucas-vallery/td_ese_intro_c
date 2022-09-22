#pragma once

#include <stdlib.h>
#include <stdio.h>
#include "config.h"

#define TAB_SIZE sizeof(tab)

void printTab(int* tab);

void fillTab(int* tab, int size);

int tabMax(int* tab, int size);

int tabMin(int* tab, int size);

void bubbleSort(int* tab, int size);
