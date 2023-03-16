class Recipe():
    def __init__(self, name, cooking_lvl, cooking_time, ingredients, description, recipe_type):
        self.name = name
        self.cooking_lvl = cooking_lvl
        self.cooking_time = cooking_time
        self.ingredients = ingredients
        self.description = description
        self.recipe_type = recipe_type
        
        # Validación de los valores de entrada
        if not isinstance(name, str):
            raise TypeError("El nombre de la receta debe ser una cadena de caracteres (str)")
        
        if not isinstance(cooking_lvl, int) or cooking_lvl < 1 or cooking_lvl > 5:
            raise ValueError("El nivel de cocina debe ser un número entero entre 1 y 5")
        
        if not isinstance(cooking_time, int) or cooking_time < 0:
            raise ValueError("El tiempo de cocción debe ser un número entero positivo")
        
        if not isinstance(ingredients, list):
            raise ValueError("Los ingredientes tiene que estar en una lista")
        
        if not isinstance(recipe_type, str) or recipe_type not in ["entrante", "comida", "postre"]:
            raise ValueError("El tipo de receta no es correcto")
    def __str__(self):
        txt = f"\tLa receta para hacer {self.name} requiere un {self.cooking_lvl} de nivel de cocina\
        y un tiempo estimado de {self.cooking_time}. Los ingredientes necesarions son {self.ingredients}.\
        .\nLa descripcion de la receta es {self.description} y el tipo de receta es {self.recipe_type}"

        return txt 
obj = Recipe("Tomatos", 2, 4, ["tomatos"], "Ayuda", "comida")
print(obj)