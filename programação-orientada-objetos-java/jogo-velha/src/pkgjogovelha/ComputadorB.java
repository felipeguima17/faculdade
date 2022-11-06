package pkgjogovelha;

public final class ComputadorB extends Jogador {
	// escolhe as casas do final para o começo em sequência
	
	int l = 2, c = 2;
	
	@Override
	public void jogar(Tabuleiro tab) {
		while (true) {
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
				if (c > 0) {
					c--; // se a posição estiver preenchida e não for a última coluna, incrementa-se a coluna
				}
				else if (c == 0) {
					l--;
					c = 2; // caso contrário, incremementa a linha e a coluna é zerada
				}
			}
		}
	}
	
	@Override
	public void resetar() { // reseta para a posição inicial
		l = 2;
		c = 2;		
	}
	
	@Override
	public String toString() {
		return "ComputadorB [Vitorias=" + getVitorias() + ", Empates=" + getEmpates() + ", Derrotas=" + getDerrotas() + "]";
	}
}
