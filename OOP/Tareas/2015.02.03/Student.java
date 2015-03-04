public class Student {
	String matricula;
	String nombre;
	int promedio;
	int semestre;
	
	/* Setters */
	void setMatricula(String mat) {
		matricula = mat;
	}
	void setNombre(String nomb){
		nombre = nomb;
	}
	void setPromedio(int prom) {
		promedio = prom;
	}
	void setSemestre(int sem) {
		semestre = sem;
	}
	
	/* Getters */
	String getMatricula() {
		return matricula;
	}
	String getNombre(){
		return nombre;
	}
	int getPromedio() {
		return promedio;
	}
	int getSemestre() {
		return semestre;
	}
}