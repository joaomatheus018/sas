# Plano de Gerenciamento do Projeto (PP)

## 1. Escopo e Objetivos Técnicos
O projeto **"O Decifrador"** visa a implementação de um sistema de criptografia simétrica por substituição (Cifra de César). O objetivo primordial é a conformidade com processos de Gerência de Projeto (GPR) e Gerência de Configuração (GCO), alinhados aos modelos CMMI e MPS-BR.

* **Funcionalidades:** Processamento de strings, aritmética modular para rotação de caracteres e interface via CLI (Command Line Interface).
* **Restrições:** O sistema não tratará criptografia assimétrica nesta versão intermediária.

## 2. Estimativas de Esforço e Cronograma
Baseado na complexidade dos requisitos funcionais (RF01 a RF07):

| Atividade | Esforço Est. | Prazo Final |
| :--- | :--- | :--- |
| Planejamento e Definição de Processos | 4h | 10/04 |
| Desenvolvimento do Core e Refatoração | 7h | 15/04 |
| Garantia da Qualidade e Testes de Stress | 8h | 17/04 |
| Revisão de Pares e Entrega Final | 10h | 20/04 |

## 3. Gestão de Riscos (Plano de Mitigação)

| Risco | Impacto | Plano de Mitigação |
| :--- | :--- | :--- |
| **Corrupção de Branch** | Alto | Implementação de Git Flow com a `develop` como branch de integração. |
| **Lixo de Memória/Buffer** | Médio | Uso de `fflush(stdin)` e `strcspn` para garantir a integridade da entrada. |
| **Divergência de Requisitos** | Baixo | Uso do Kanban para rastreabilidade diária entre o planejado e o codificado. |
