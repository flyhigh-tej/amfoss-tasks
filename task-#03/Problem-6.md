# PROBLEM SOLVERS vs DEVELOPERS
                m,n=map(int,input().split());
                if (1<m<101 and 1<n<101) :
                  d=[]
                  p=[]
                  x=list(map(int,input().split()))
                  d.append(x)
                  x=list(map(int,input().split()))
                  p.append(x)  
  
                  temp=0
                  flag=0
                  min_pow=0
                  for i in range(0,n,1) :
                     for j in range(i+1, len(d)) :
                         if (d[i]<d[j]) :
                            temp = d[i]
                            d[i] = d[j]
                            d[j] = temp

                  for i in range(0,m,1) :
                     for j in range(i+1, len(p)) :
                         if (p[i]< p[j]) :
                            temp = p[i]
                            p[i] = p[j]
                            p[j] = temp  

                  for i in range(0,n,1) :
                     for j in range(0,m,1) :
                        if  p[j] <= d[i] :
                            flag= 1
                            print("NO")
                            break
                         elif p[j] > d[i] :
                            min_pow+= p[j]  

                   if(flag == 0):
                      print("YES")
                      print(min_pow)
