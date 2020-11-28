# Se declara la clase(Es como una plantilla)
class Laptop:
	  
    def __init__(self):
        self.case = 'Negra' # Atributos
  	    self.contiene_graficadedicada = True
	    self.tiene_discoduro = True
	    self.ram = True 

 	def cargarOS(self):
 		print("La laptop esta encendiendo")                                                  

	def ejecutarjuegos(self):
		if self.es_valido_para_jugar():
			print("La laptop ha ejecutado perfectamente Red Dead Redemption 2") 
		else: 
			print("La laptop no cumple los requisitos minimos para ejecutar RDR2")
			print("Se ha apagado ")
		
	def es_valido_para_jugar(self):
		return self.contiene_graficadedicada	

# Este es el objeto
Laptop_Vit = Laptop()	
Laptop_Vit.cargarOS()
Laptop_Vit.contiene_graficadedicada = False
Laptop_Vit.ejecutarjuegos()
