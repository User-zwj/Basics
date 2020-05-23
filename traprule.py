from func import f

def Trap(a,b,n,h):
	integral = (f(a)+f(b))/2
	
	x = a
	for i in range(1, int(n)):
		x = x + h
		integral = integral + f(x)

	return integral * h
