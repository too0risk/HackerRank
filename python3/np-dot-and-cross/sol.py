import numpy as np

if __name__=="__main__":
	n=int(input())
	a=np.array([input().split() for _ in range(n)],int)
	b=np.array([input().split() for _ in range(n)],int)
	print(np.dot(a,b))