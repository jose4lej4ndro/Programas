class Laptop:
	def __init__ (self, case, contiene_graficadedicada, tiene_discoduro, ram ):
		self.case = case
		self.contiene_graficadedicada = contiene_graficadedicada
		self.tiene_discoduro = tiene_discoduro
		self.ram = ram 

	def cargarOS(self):
		print("La laptop esta encendiendo")

	def ejecutarprogramas(self):
		if self.es_valido_para_jugar():
			print("La laptop esta ejecutando RDR 2")
		else:
			print("La laptop no cumple los requisitos minimos para ejecutar RDR2")
			print("Se ha apagado")
	def es_valido_para_jugar(self):
		return self.contiene_graficadedicada

Laptop_gamer = Laptop("Azul", True, True, True)
Laptop_gamer.cargarOS()
Laptop_gamer.ejecutarprogramas()
