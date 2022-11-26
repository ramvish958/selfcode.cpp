array = []
print("How many element you want i array :")   #user input how many element want in array 
element = int(input())
print("Start entering ",element," in array ")
for i in range(element):                        #range for element to be inserted in array
    enter = int(input())
    array.append(enter)                         #adding 'enter' variable  which stores data in array
print(array)
print("Enter element to search in array :")     #user input to search element in array or not
search = int(input())
temp = -1
for i in range(element):
    if(array[i]==search):                       #condition for checking equality
        print("Element found :")
        temp = 0
if(temp == -1):
    print("Element not found :")
    
