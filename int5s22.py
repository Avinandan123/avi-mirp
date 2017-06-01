import math
a=10*(1-0.001)
b=0.0
n=2
while n<1024:
	n=n*2

	h=(b-a)/n

	def f(x):
		return 1/math.sqrt(20*(5-x))
	s=f(a)+f(b)
	
	s2=0
	s1=0
	
	for i in range(1,int(n),2):
		s1=s1+2*f(a+i*h)
		continue
	
	for i in range (2,int(n-1),2):
		
		s2=s2+4*f(a+i*h)
		continue
		
	
	print(n,-4*h*(s+s2+s1)/3)
