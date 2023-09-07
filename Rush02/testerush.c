/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testerush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaria-d <emaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:46:51 by emaria-d          #+#    #+#             */
/*   Updated: 2023/09/03 18:57:14 by emaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

// Função para obter o extenso.
const char *obExt(int num) {
    // Array de strings para retorno.
    char *ext[21] = {
        "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
        "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen", "Twenty"
    };

    // Validador de números no intervalo de 0 à 20.
    if ((num >= 0) && (num <= 20))
    {
        return ext[num];
    } 
    else 
    {
            return "Error";
    }
}

// Função para escrever a mensagem por extenso.
void menseger(const char *mensagem) {
    int i = 0;
    while (mensagem[i] != '\0') {
        i++;
    }

    write(1, mensagem, i);
    write(1, "\n", 1);
}

int main(int argc, char *argv[]) {
    // Validador de argumento.
    if (argc != 2) {
        menseger("Error");
        return (1);
    }

    // Conversor do argumento para numero inteiro.
    int num = atoi(argv[1]);

    // Obter a mensagem por extenso.
    const char *mensagem = obExt(num);
    // Escrever a mensagem.
    menseger(mensagem);

    return 0;
}