'''

Logic : A base class is modified like a wrapper by adding new functionality to it.


'''
class Fika:
    def cost(self):
        return 10

def with_kanelBulle(component):
    def cost():
        return component.cost()+35  # In Swedish Krona
    return cost

def with_kanelBulle_and_coffee(component):
    def cost():
        return component.cost()+50  # In Swedish Krona
    return cost

def with_tea(component):
    def cost():
        return component.cost()+15  # In Swedish Krona
    return cost

my_fika = Fika()
print("Cost of fika : kr",my_fika.cost())
my_fika_with_kanelBulle = with_kanelBulle(my_fika)
my_fika_with_kanelBulle_and_coffee = with_kanelBulle_and_coffee(my_fika)    
my_fika_with_tea = with_tea(my_fika)
print("Cost of fika with kanelBulle : kr ",my_fika_with_kanelBulle())
print("Cost of fika with kanelBulle and coffee : kr ",my_fika_with_kanelBulle_and_coffee())
print("Cost of fika with tea : kr ",my_fika_with_tea())


    