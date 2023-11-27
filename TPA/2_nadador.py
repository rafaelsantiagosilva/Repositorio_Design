# Rafael Santiago da Silva 1ºD 31/10/2023 - 2_nadador.py
print(f'{"Exercício 02":=^55}\n')
print(f'{"Nadador":-^55}')
categoria = 'ERRO'
idade = int(input('\nDigite a idade do nadador: '))
while True:
    while categoria == 'ERRO':
        if idade >= 5 and idade <= 7:
            categoria = 'INFANTIL'
        elif idade >= 8 and idade <= 10:
            categoria = 'JUVENIL'
        elif idade >= 11 and idade <= 15:
            categoria = 'ADOLESCENTE'
        elif idade >= 16 and idade <= 30:
            categoria = 'ADULTO'
        elif idade > 30:
            categoria = 'SÊNIOR'
        else:
            categoria = 'ERRO'
            idade = int(input('\nERRO: Por favor, digite a idade do nadador novamente: '))
        print(f'\n{"-=-"*15}\nA categoria do nadador é {categoria}\n{"-=-"*15}')
        opc = input("Deseja continuar? [S/N]\nR:").upper()
        if opc!='S':
            break