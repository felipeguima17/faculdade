package pkgjogovelha;

import java.util.Scanner;

public final class Pessoa extends Jogador {
	// classe final pois não possuirá filhas
	// classe que herda a classe Jogador
	
	Scanner sc = new Scanner(System.in);
	
	@Override
	public void jogar(Tabuleiro tab) {
		
		while (true) { // laço encerra somente quando a pessoa escolher um espaço válido
			
			do {
				System.out.println("--------------------------------");
				System.out.println("Informe a linha que deseja selecionar [0 a 2]: ");
				tab.setLinha(sc.nextInt());
				System.out.println("Informe a coluna que deseja selecionar [0 a 2]: ");
				tab.setColuna(sc.nextInt());
				System.out.println("--------------------------------");
			} while(tab.getLinha() < 0 || tab.getLinha() > 2 && tab.getColuna() < 0 || tab.getColuna() > 2);
			
			if (tab.mat[tab.getLinha()][tab.getColuna()] == 0) { // se a posição for vazia, atribui-se 1
				tab.mat[tab.getLinha()][tab.getColuna()] = 1;
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
		return "Você [Vitorias=" + getVitorias() + ", Empates=" + getEmpates() + ", Derrotas=" + getDerrotas() + "]";
	}
	
}
