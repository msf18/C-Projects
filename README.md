# C-Projects
Consists of c programs for C programming labs and assignments
a)streak.c
For every positive number nn we define the function streak(n)=kstreak(n)=k as the smallest positive integer kk such that n+kn+k is not divisible by k+1k+1.
E.g:
13 is divisible by 1 
14 is divisible by 2 
15 is divisible by 3 
16 is divisible by 4 
17 is NOT divisible by 5 
So streak(13)=4streak(13)=4. 
Similarly:
120 is divisible by 1 
121 is NOT divisible by 2 
So streak(120)=1streak(120)=1.

Define P(s,N)P(s,N) to be the number of integers nn, 1<n<N1<n<N, for which streak(n)=sstreak(n)=s.
So P(3,14)=1P(3,14)=1 and P(6,106)=14286P(6,106)=14286.

Find the sum, as ii ranges from 1 to 31, of P(i,4i)P(i,4i).
