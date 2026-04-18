n = int(input("Enter the Range: ")) 
i = 1 
sum = 0 
sign = 1 
while(i <= 2*n-1): 
     sum = sum + i*sign 
     sign = sign * -1 
     i = i + 2 
print("Sum of Series:",sum) 