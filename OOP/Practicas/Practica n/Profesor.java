public class Profesor extends Empleado {

	@Override
	void festejarPosada(double presupuesto) {
		System.out.println("Festejando en Profesor");
		System.out.println("Presupuesto:" + presupuesto);
	}

}