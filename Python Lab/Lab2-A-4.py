# 4) (a) You are planning for foreign trip. So you convert your indian rupee to US Dollar.
# Enter any amount in rupees you wish to convert and display the equivalent currency in US Dollar.
#
# (b) You saved some US Dollar in trip. So you wanted to convet the US Dollar to indian rupees on return.
# Display the amount you saved in trip in Indian currency.

print("Enter the amount in indian rupee to conver to US dollar")
amtINR=int(input())

INR2US=0.014

amtUS=amtINR*INR2US

print("Amount in US dollar = ",amtUS)
print()

print("Enter amount of US dollar saved in trip: ")
savedUS=int(input())

print("Amount saved in Indian Rupee = ",savedUS/INR2US);
