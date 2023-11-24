def veri_pri(num):
    # Resetando variáveis
    i=1
    div=0
    
    # Contando divisores
    while i<=num:
        if num % i == 0:
            div+=1
            
        if div > 2:
            break
        
        i+=1
    
    # Retornando se é primo ou não
    if div > 2:
        return 0
    else:
        return 1

def veri_ant(num):
    # Calculando antecessor primo
    while veri_pri(num) != 1:
        
        # Calculando antecessor
        num-=1
        
        # Verificando se é primo
        veri_pri(num)
    return str(num)

def veri_suc(num):
    # Calculando sucessor primo
    while veri_pri(num) != 1:
        
        # Calculando sucessor
        num+=1
        
        # Verificando se é primo
        veri_pri(num)
    return str(num)

# Inicialização de variáveis
num = 0
opc = "S"
div = 0
resp = ""
i = 0

print(f'{"Sis_Primo":=^177}')
while opc == "S":
    # Imprimindo instruções
    print('\n        ---INSTRUÇÕES---')
    print('        1) Digite o número para verificar se é primo')
    print('        2) Aperte a tecla Enter para confirmar o número')
    print('        3) Digite S para reusar o programa ou outro qualquer tecla para parar')
    print('        4) Aperte a tecla Enter para confirmar sua resposta')
    print('        OBS: Deixe em tela cheia para melhor visualização')
    
    # Verificando se é válido
    try:
        # Lendo número
        num = float(input("\n        Digite um número: "))
        # Se for...
        
        if num < 0 or num == 0 or num == 1:
            resp = "\n        Não é primo. O número primo antecessor é INEXISTENTE e o sucessor é 2!"
        else:
            # Verificando se é primo
            veri_pri(round(num))
            
            # Montando resposta
            if veri_pri(round(num)) == 1:
                resp = "\n        O número é primo!"
            else:
                # Verificando antecessor e sucessor primo
                resp = "\n        O número não é primo! O antecessor primo é "+ veri_ant(round(num)) +" e o sucessor primo é "+ veri_suc(round(num)) + "!"
        
    except ValueError:
        # Se não for...
        resp = "\n        ERRO: Por favor, digite um valor numérico!"
    # Imprimindo resposta
    print(resp)
        
    # Opção de recalcular
    opc = str(input('        Usar novamente? [S/N]\n        R:')).upper()