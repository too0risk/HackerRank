import numpy as np

if __name__=="__main__":
	A=np.array(input().split(),int)
	B=np.array(input().split(),int)
	print(np.inner(A, B), np.outer(A, B), sep='\n')