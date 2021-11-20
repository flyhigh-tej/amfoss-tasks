# BUILDING TOWERS 1
          n=int(input())
          w=[]
          w2=[]
          h=0
          t=0
          no=0
          x=list(map(int,input().split()))
          w.append(x)
          for i in range(0,len(w)-1) :
             for j in range(i+1, len(w)):
                for k in range(0,len(w2)) :
                   if w[i] != w2[k] :
                      if w[i] == w[j] :
                          w2.append(w[i])
                          h=h+1
                          if h>t :
                             t=h
                       no=no+1
            print(t,"",no,end='')     
