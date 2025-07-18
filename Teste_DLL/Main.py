import ctypes

dll = ctypes.CDLL('./Fibonacci.dll')

dll.Fibonacci(10)