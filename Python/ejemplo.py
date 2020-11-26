opc = input(" elije una opcion: 1 para sumar, 2 para restar, 3 para multiplcar y 4 para dividir:  ")

if opc == 1 :
   num1 = input("ingresa el primer numero: ")
   num2 = input("ingresa el segundo numero: ")

   res = float(num1) + float(num2)
   print(res)

elif opc == 2 :
    num1 = input("ingresa el primer numero: ")
    num2 = input("ingresa el segundo numero: ")

    res = int(num1) - float(num2)
    print(res)

elif opc == 3 :
    num1 = input("ingresa el primer numero: ")
    num2 = input("ingresa el segundo numero: ")

    res = float(num1) * float(num2)
    print(res)

elif opc == 4 :
    num1 = input("ingresa el primer numero: ")
    num2 = input("ingresa el segundo numero: ") 
    
    if num2 == 0 :
        print("Error, no se puede dividir entre cero")
    
    else:
        res = float(num1) / float(num2)
        print(res)

else:
	print("Por favor ingresa una opcion correcta")