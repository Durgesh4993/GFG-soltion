#User function Template for python3
import math
mod=10**9+7
class Solution:
	def compute_value(self, n):
		# Code here
		num=math.factorial(2*n)
		den=math.factorial(n)**2
		return(num//den)%mod
