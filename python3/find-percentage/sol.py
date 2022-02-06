if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    
    q=student_marks.get(query_name)
    res=sum(q)/len(q)
    print("%0.2f"%(res))