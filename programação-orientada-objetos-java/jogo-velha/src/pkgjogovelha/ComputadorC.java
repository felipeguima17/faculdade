package pkgjogovelha;

import java.util.Random;

public final class ComputadorC extends Jogador {
	// escolhe um espaço aleatoriamente
	Random rd = new Random();
	int l, c;

	@Override
	public void jogar(Tabuleiro tab) {
		while (true) { // laço encerra somente quando o computador escolher um espaço válido
			
			l = rd.nextInt(3); // geração da linha
			c = rd.nextInt(3); // geração da coluna
			tab.setLinha(l);   
			tab.setColuna(c);
			System.out.printf("Computador escolheu a posição [%d][%d]\n", tab.getLinha(), tab.getColuna());
			System.out.println("--------------------------------");
							
			if (tab.mat[tab.getLinha()][tab.getColuna()] == 0) { // se a posição for vazia, atribui-se -1
				tab.mat[tab.getLinha()][tab.getColuna()] = -1;
				tab.setJogadas(tab.getJogadas() + 1); // contador de jogadas incrementa
				break;
			}
			else {
				System.out.println("Esta posição já está preenchida!");
			}
		}
		
	}
	
	public void resetar() { // reseta para a posição inicial
		// aqui nada irá acontecer		
	}
	
	@Override
	public String toString() {
		return "ComputadorC [Vitorias=" + getVitorias() + ", Empates=" + getEmpates() + ", Derrotas=" + getDerrotas() + "]";
	}
}
