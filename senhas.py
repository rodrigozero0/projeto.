from random import choice
import string

tamanho = 5
valores = string.ascii_lowercase
senha = ''
for i in range(tamanho):
  senha += choice(valores)

print(senha)