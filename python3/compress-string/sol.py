# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import groupby
if __name__=="__main__":
	S=input()

	for i,j in groupby(map(int,list(S))):
		print("({}, {})".format(len(list(j)),i), end=" ")
	print()