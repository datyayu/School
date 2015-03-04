// Main Class
class Ppal {
	public static void main(String[] args) {
		Student alumno = new Student();

		alumno.setSemestre( Integer.parseInt(args[9]) );
		alumno.setNombre( args[0] );

		System.out.println("La chica que mas ama el pasto se llama: " + alumno.getNombre());
		System.out.println("Ella esta en el semestre: " + args[9]);
		System.out.println(String.valueOf(alumno));

	}
}


// Student Class
class Student {
	int semestre;
	String nombre;


/* Getters */
	void setNombre(String nom) {
		nombre = nom;
	}

	void setSemestre(int sem) {
		semestre = sem;
	}

/* Setters */
	String getNombre() {
		return( nombre );
	}

	int getSemestre() {
		return( semestre );
	}
}
