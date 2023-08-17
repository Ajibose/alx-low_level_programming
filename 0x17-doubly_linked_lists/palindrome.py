#!/usr/bin/python3

def larrgestPalindrome(n):
 
    upper_limit = (10**(n))-1
      
    # largest number of n-1 digit.
    # One plus this number
    # is lower limit which is
    # product of two numbers.
    lower_limit = 1 + upper_limit//10
  
    max_product = 0 # Initialize result
    for i in range(upper_limit,lower_limit-1, -1):
     
        for j in range(i,lower_limit-1,-1):
         
            # calculating product of
            # two n-digit numbers
            product = i * j
            if (product < max_product):
                break
            number = product
            reverse = 0
  
            # calculating reverse of
            # product to check
            # whether it is palindrome or not
            while (number != 0):
             
                reverse = reverse * 10 + number % 10
                number =number // 10
             
  
             # update new product if exist and if
             # greater than previous one
            if (product == reverse and product > max_product):
                max_product = product
         
     
    return max_product
 
# Driver code
 
n = 3
print(larrgestPalindrome(n))
