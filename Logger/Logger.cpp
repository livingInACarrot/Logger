#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Logger.h"

using namespace std;

int main()
{
    int n = 7;
    const char* s = "abracadabra";

    Logger::Info(s, n);
}