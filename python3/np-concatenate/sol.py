import numpy as np

if __name__=="__main__":
	P,N,M=map(int,input().split())
	A=np.array([input().split() for _ in range(P)],int)
	B=np.array([input().split() for _ in range(N)],int)
	print(np.concatenate((A, B),axis = 0))