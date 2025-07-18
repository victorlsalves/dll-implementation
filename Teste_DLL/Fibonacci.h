#ifndef FIBONACCI_H
#define FIBONACCI_H

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

EXPORT void Fibonacci(int n);  // Changed to match your usage

#endif