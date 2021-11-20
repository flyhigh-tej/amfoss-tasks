# FIGHT'S ON
     t=int(input())
     for j in range(t) :
        count=0
        sec=0
        no=0
        ans=0
        N,M,k,v=map(int,input().split())
        for i in range(2,N+1,3) :
           if i==N :
             count=count+1
             sec=sec+1
           else :
             count=count+2
             sec=sec+1
           elif k == sec :
             break
           elif count == N :
             ans=0     
           no=no+1
           if no == M :
             break
           if count != N :
             ans= N-count
