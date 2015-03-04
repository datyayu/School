public class Principal {
	public static void main(String args[]) {
		Student student1 = new Student();
		Student student2 = new Student();
		Student[] students = {student1, student2};
		
		int currentArg = 0; // Iterador de argumentos

		for(Student student: students) {
			student.setMatricula(args[currentArg++]);
			student.setNombre(args[currentArg++]);
			student.setPromedio(Integer.parseInt(args[currentArg++]));
			student.setSemestre(Integer.parseInt(args[currentArg++]));
			
			System.out.println("==========================");
			System.out.println("Matricula: " + student.getMatricula());
			System.out.println("Nombre: " + student.getNombre());
			System.out.println("Promedio: " + student.getPromedio());
			System.out.println("Semestre: " + student.getSemestre());
			System.out.println("==========================\n");
		}
	}
}