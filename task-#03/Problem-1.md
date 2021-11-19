# THE GAME I MUST LOSE
            n,m=map(int,input().split())
            s=0
            if(n%2==0) :
              for i in range(1,m+1,1) :
                if (i%2!=0) :
                   s=s+1
              print(s)
              for i in range(1,m+1,2) :
                print(i,"",end='')
            elif ( n%2!=0 ) :
               print("0")

         
