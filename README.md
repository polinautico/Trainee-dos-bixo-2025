# Trainee-dos-bixo-2025
### Repositório usado para treinar os bixo

# Bem-vindo
### Você atualmente está na branch main

# Esse é um arquivo .md
### Um arquivo MD (extensão .md) é um arquivo de Markdown, uma linguagem de marcação simples e amplamente usada para formatação de texto. O Markdown é projetado para ser fácil de ler e escrever, permitindo que você adicione elementos de formatação ao texto, como títulos, listas, links, imagens, entre outros, sem precisar de código HTML complexo.
### Se quiser saber como escreve e quais comandos você pode usar aqui o google é seu melhor amigo.

# Manual de boas práticas
### A ideia é que nós principalmente escrevemos código em equipe, ou vamos deixar ele para outra pessoa usar depois, por isso é muito importante que ele seja documentado, explicado, geralmente com o uso de arquivos .md, mas também usamos outra forma (fizemos um site).
### Existem outras regras de boas práticas, como colocar nomes de variáveis intuitivos e que façam sentido com o seu programa (mesmo que fique grande, o VSCode vai te ajudar a completar), ou criar funções pequenas, que façam idealmente uma, ou poucas coisas, isso ajuda muito na modularização e na compreensão quando outra pessoa for ler seu código. Principalmente pense que você está escrevendo para outra pessoa ler!!
### Por aí vai, mas com o tempo vocês pegam o jeito. Lembrando que são boas práticas e que vão haver excessões, por exemplo se estiver codando pra máxima performance,
### De qualquer forma aqui vão uns links que eu achei sobre boas práticas
### https://liag.ft.unicamp.br/programacao2/boas-praticas-de-programacao/
### https://logap.com.br/blog/boas-praticas-programacao/

# Clonando o Repositório e criando sua propria branch
## Clonando
Basta usar o comando `git clone [Endereco]`, clone esse repositório que você está lendo, você pode clicar em code (botão verde), selecionar SSH e copiar o endereço
```
git clone git@github.com:polinautico/Trainee-dos-bixo-2025.git
```

## Status
Comando que verifica o estado atual do seu repositório (arquivos modificados, arquivos não rastreados, etc.).
```
git status
```

## Add
### Adiciona arquivos ao índice (staging area) para preparação para commit.
### Para adicionar um único arquivo:
```
git add nome_do_arquivo
```
### Para adicionar todos os arquivos modificados:
```
git add .
```
## Commit
Cria um commit (salva as alterações no repositório local). **Talvez um dos comandos mais importantes**
```
git commit -m "Mensagem do commit"
```

## Push e pull (push = empurrar e pull = puxar!!!)
### Também são uns dos commandos mais importantes
### Push envia os commits locais para o repositório remoto
```
git push origin nome_da_branch
```

### Pull baixa todas as alterações feitas no repositório remoto e integra no repositório local.
```
git pull origin nome_da_branch
```

### 






