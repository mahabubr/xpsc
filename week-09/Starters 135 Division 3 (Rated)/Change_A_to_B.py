# cook your dish here
#code by Prathamesh Ghodmare
for i in range(int(input())):
    a,b,k=map(int,input().split())
    res=0
    while(True):
        if b%k==0 and b/k>=a:
            res+=1
            b=b//k
        elif(b%k==0):
            res-res+b-a
            break
        else:
            res=res+b%k
            b=b-b%k
    print(res)