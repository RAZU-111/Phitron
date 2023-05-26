with open('message.txt','w') as file:
    file.write("I like python , ")
with open('message.txt','a') as file:
    file.write("code with me :")
with open('message.txt','r') as file:
    text=file.read()
    print(text)  
