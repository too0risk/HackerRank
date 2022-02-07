import numpy as np

if __name__=="__main__":
	np.set_printoptions(sign=' ')

	array=np.array(input().split(),float)

	print(np.floor(array))
	print(np.ceil(array))
	print(np.rint(array))