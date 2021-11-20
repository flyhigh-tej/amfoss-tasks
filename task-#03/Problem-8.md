# JOURNEY TO REGIONALS
         n=int(input())
         amt=[]
         t=[]
         for i in range(n) :
            x=list(map(int,input().split()),end=" ")
            amt.append(x)
         q=int(input())
         for i in range(q) :
           x=list(map(int,input().split()))
           t.append(x)
           for j in range(0, len(amt)) :
             if t[0] == amt[j] :
                a=j
             if t[1] == amt[j] :
                b=j
           s=0
           if amt[a] == amt[b] :
              final= amt[a : b]
           else :  
              final=amt[a : b+1]
           for k in range(a,len(final)) :
               s=s+int(final[i])
           print(s) 
