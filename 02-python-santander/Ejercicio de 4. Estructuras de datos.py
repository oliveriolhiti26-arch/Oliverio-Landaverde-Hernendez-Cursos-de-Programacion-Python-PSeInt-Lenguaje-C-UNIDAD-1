# Ejercicio propio: listas
# Gestiona una lista de tareas.

tareas = ["estudiar", "hacer ejercicio"]
tareas.append("cocinar")
tareas.insert(0, "despertar")
tareas.remove("hacer ejercicio")
print(tareas)

tareas.sort()
print("Ordenadas:", tareas)

mayusculas = [t.upper() for t in tareas if len(t) > 6]
print("Largas en mayúsculas:", mayusculas)
