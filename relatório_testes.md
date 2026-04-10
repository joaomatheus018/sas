# Plano de Garantia da Qualidade (QA)

Este documento evidencia os testes realizados para validar a viabilidade técnica e a integridade algorítmica.

## 1. Testes de Unidade (Lógica da Cifra)

| Entrada (Input) | Chave | Saída Esperada | Comportamento Observado | Status |
| :--- | :---: | :--- | :--- | :---: |
| `Krod` | 3 | `Hola` | Rotação ASCII correta | ✅ Passou |
| `A Z` | 3 | `D C` | Manutenção de espaço e case | ✅ Passou |
| `123!` | 3 | `123!` | Caracteres especiais intactos | ✅ Passou |

## 2. Critérios de Aceitação
1.  **Integridade:** A mensagem deve retornar ao estado original com 100% de precisão.
2.  **Robustez:** O sistema deve tratar strings de até 100 caracteres sem overflow.
3.  **Case-Sensitivity:** Diferenciação entre maiúsculas e minúsculas deve ser preservada (RF05).
