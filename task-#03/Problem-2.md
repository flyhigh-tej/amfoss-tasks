# LISA AND SHELVES
          n=int(input())
          m=0
          list = []
          for i in range(1,n+1,1) :
             if (n%i==0) :
               if i in list :
                   break
               k=n/i
               if i==k :
                    break
               m=m+1
               list.append(k) 
               k=0    
           m=m*2 
           if (i==k) :
               m=m+1  
           print(m)
