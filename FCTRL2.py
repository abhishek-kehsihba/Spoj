def factorial(n): 
      
    # single line to find factorial 
    return 1 if (n==1 or n==0) else n * factorial(n - 1);  
  
# Driver Code 
a=int(input())
for i in range (0,a):
    num = int(input()); 
    print(factorial(num))