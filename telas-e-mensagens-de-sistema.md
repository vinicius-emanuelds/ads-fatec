# Telas e Mensagens de Sistema

## Tela - Reservar Sala

```clike
=== ReuniON ===
1. Listar salas
2. Reservar sala
3. Listar reservas
4. Alterar reserva
5. Cancelar reserva
6. Alterar senha
7. Sair

Escolha uma opção: 2

Escolha o tipo de sala: GA

Salas cadastradas:
Número da sala: 02
Tipo da sala: GA
Status atual da sala: Ativa

Número da sala: 06
Tipo da sala: GA
Status atual da sala: Ativa

Escolha o número da sala: 02

Digite a data de inicio da reserva (dd/mm/yyyy): 30/11/2024
Digite a hora de inicio da reserva (HH:MM): 14:00
Digite a data de fim da reserva (dd/mm/yyyy): 30/11/2024
Digite a hora de fim da reserva (HH:MM): 15:00

Sala GA - 02 reservada com sucesso.
```

***



## Fluxos

### **Fluxo Normal** <a href="#id-61-fluxo-normal" id="id-61-fluxo-normal"></a>

* **Reserva confirmada:**
  * "Sua reserva foi registrada com sucesso!"
* **Usuário cadastrado:**
  * "Novo usuário adicionado: \[ID]."

### **Mensagens de Erro** <a href="#id-62-mensagens-de-erro" id="id-62-mensagens-de-erro"></a>

* **Login inválido:**
  * "Credenciais incorretas. Tente novamente."
* **Sala indisponível:**
  * "Erro: Sala já reservada neste horário."
* **Dados inválidos:**
  * "Os campos obrigatórios devem ser preenchidos corretamente."

### **Fluxos de Exceção** <a href="#id-63-fluxos-de-exce-c3-a7-c3-a3o" id="id-63-fluxos-de-exce-c3-a7-c3-a3o"></a>

* **Erro na autenticação:**\
  O sistema bloqueia o acesso após 3 tentativas falhas.
* **Conflito de agendamento:**\
  O sistema solicita ajustes na data ou sala para evitar conflitos.
