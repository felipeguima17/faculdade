package pkgjogovelha;

public abstract class Jogador {  
	private int Vitorias;
	private int Empates;
	private int Derrotas;
	
	public Jogador() {
		setVitorias(0);
		setEmpates(0);
		setDerrotas(0);	
	}

	public int getVitorias() {
		return Vitorias;
	}

	public void setVitorias(int Vitorias) {
		this.Vitorias = Vitorias;
	}

	public int getEmpates() {
		return Empates;
	}

	public void setEmpates(int Empates) {
		this.Empates = Empates;
	}

	public int getDerrotas() {
		return Derrotas;
	}

	public void setDerrotas(int Derrotas) {
		this.Derrotas = Derrotas;
	}
	
	@Override
	public String toString() {
		return "Jogador [Vitorias=" + Vitorias + ", Empates=" + Empates + ", Derrotas=" + Derrotas + "]";
	}

	public abstract void jogar(Tabuleiro tab);
	
	public abstract void resetar();
	
}
