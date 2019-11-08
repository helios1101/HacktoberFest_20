class Hillclimbing:

	def __init__(self,node):
		self.node=node

	def hill_climbing(self):

		for i in range(0,len(self.node)-2):

			if i==0:
				if self.node[i]>self.node[i+1]:
					return self.node[i]

			elif  (self.node[i]>self.node[i+1]) and (self.node[i-1]<self.node[i]):
				
				return self.node[i]

node=[32h,45,67,44,544]
hillclb=Hillclimbing(node)
print(hillclb.hill_climbing())