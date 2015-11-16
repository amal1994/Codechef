    # cook your code here
     
    def function(t):
             if(t % 9 == 0):
                return 9
            
             elif((t + 1)%9 == 0):
            
                return 8
            
             elif((t + 2)%9 == 0):
            
                return 7
            
             elif((t + 3)%9 == 0):
            
                return 6
            
             elif((t + 4)%9 == 0):
            
                return 5
            
             elif((t + 5)%9 == 0):
            
                return 4
            
             elif((t + 6)%9 == 0):
            
                return 3
            
             elif((t + 7)%9 == 0):
            
                return 2
            
             elif((t + 8)%9 == 0):
            
                return 1
                
    t = raw_input()
    t = int(t)
    while t>0:
        ans = 0
        user_input = raw_input()
        a,d,l,r = user_input.split()
        a = int(a)
        d = int(d)
        l = int(l)
        r = int(r)
        ft = a+(l-1)*d
       # print ft
        if(d == 0):
            ans = (r-l+1)*function(a)
        elif d%9==0:
        	    
        	        ans+= function(ft)*(r-l+1)
        	        
        	        
        elif d % 3==0 or d%6 ==0:
        	    
        	        sum = function(a+(l-1)*d)+function(a+(l)*d)+function(a+(l+1)*d)
        	        ans+=((r-l+1)/3)*sum
        	        temp = (r-l+1)%3
        	        for i in range(temp):
        	            ans+= function(ft)
        	            ft=ft+d
        
        	        
        else:
        	   
        	    
        	  # lt = a+(r-1)*d;
        
        	    temp = (r-l+1)%9
        	  #  printf("%llu %llu\n",ft,temp);
        	    	  
        	    if (r-l+1)>=9:
        	    
        	        ans+= (45*((r-l+1)/9))
        	        
        	    
        	    for i in range (temp):
        	    
        	        ans+=function(ft)
        	        ft+=d
        	    
        	    
        print ans
        	    
        	   
        	
        t=t-1
        	    
        	    
        
             
