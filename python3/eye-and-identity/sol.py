import numpy as np

if __name__=="__main__":
	np.set_printoptions(sign=' ')
	print(np.eye(*map(int, input().split())))