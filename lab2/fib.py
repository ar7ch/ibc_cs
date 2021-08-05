import time

def fib_it(n):
	a1 = 1; a2 = 1
	for i in range(2,n):
		t = a2;
		a2 += a1
		a1 = t
	return a2

def fib_rec(n):
	if (n == 0):
		return 0
	if (n == 1):
		return 1
	if (n == 2):
		return 1
	return fib_rec(n-1) + fib_rec(n-2)

n = int(input())
start_time = time.time()
val = fib_it(n)
end_time = time.time()
print('N-th Fibonacci number (iterative solution): {0}\nExecution time: {1:.3f} microseconds'.format(val, (end_time-start_time)/1e-6))

start_time = time.time()
val = fib_rec(n)
end_time = time.time()
print('N-th Fibonacci number (recursive solution): {0}\nExecution time: {1:.3f} microseconds'.format(val, (end_time-start_time)/1e-6))
