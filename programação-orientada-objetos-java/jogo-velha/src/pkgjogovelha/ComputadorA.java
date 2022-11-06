package pkgjogovelha;

public final class ComputadorA extends Jogador {
	// escolhe as casas do começo para o fim em sequência
	
	int l = 0, c = 0;

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
				if (c < 2) {
					c++; // se a posição estiver preenchida e não for a última coluna, incrementa-se a coluna
				}
				else if (c == 2) {
					l++;
					c = 0; // caso contrário, incremementa a linha e a coluna é zerada
				}
			}
		}
	}
	
	@Override
	public void resetar() { // reseta para a posição inicial
		l = 0;
		c = 0;		
	}

	@Override
	public String toString() {
		return "ComputadorA [Vitorias=" + getVitorias() + ", Empates=" + getEmpates() + ", Derrotas=" + getDerrotas() + "]";
	}
	
}
