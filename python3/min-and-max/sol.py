import numpy as np

if __name__=="__main__":
	N, M=map(int, input().split())
	storage=np.array([input().split() for _ in range(N)],int)
	print(np.max(np.min(storage,axis=1),axis=0))