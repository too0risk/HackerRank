if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())

    #convert map to list and remove dupl elm
    arr=list(set(arr))

    #reverse sort list
    arr.sort(reverse=True)

    #runner-up will be at the second pos / index 1
    second=arr[1]
    print(second)