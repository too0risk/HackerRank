import numpy as np

if __name__=="__main__":
	array=[]
	n,m=map(int,input().split())
	for _ in range(n):
		array.append(list(map(int,input().split())))
	array=np.array(array)
	print(np.mean(array,axis=1))
	print(np.var(array,axis=0))
	print(round(np.std(array),11))