num_dict={'0':'zero','1':'one','2':'two','3':'three','4':'four','5':'five','6':'six','7':'seven','8':'eight','9':'nine'}
num=input("enter the phone num:")
i=0
while i<len(num):
 if(len(num)<2):
   if num[i]==num[i+1] and num[i]==num[i+2]:
     print("triple "+num_dict[num[i]],end=" ")
     i=i+3
   elif num[i]==num[i+1]:
     print("double "+num_dict[num[i]],end=" ")
     i=i+2
   else:
     print(num_dict[num[i]],end=" ")
     i=i+1
 else:
     print("")
 