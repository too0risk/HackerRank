if __name__ == '__main__':
    N = int(input())
    l=[]
    for i in range(0,N):
        l.append(input().split())

    temp=[]
    for i in range(0,len(l)):
    	if(l[i][0]=="insert"):
    		temp.insert(int(l[i][1]),int(l[i][2]))
    	if(l[i][0]=="print"):
    		print(temp)
    	if(l[i][0]=="remove"):
    		temp.remove(int(l[i][1]))
    	if(l[i][0]=="append"):
    		temp.append(int(l[i][1]))
    	if(l[i][0]=="sort"):
    		temp.sort()
    	if(l[i][0]=="pop"):
    		temp.pop()
    	if(l[i][0]=="reverse"):
    		temp.reverse()