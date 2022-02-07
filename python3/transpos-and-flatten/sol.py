import numpy as np

if __name__=="__main__":
	N,M=map(int,input().split())

	storage=np.array([input().strip().split() for _ in range(N)],int)
	print(storage.transpose())
	print(storage.flatten())