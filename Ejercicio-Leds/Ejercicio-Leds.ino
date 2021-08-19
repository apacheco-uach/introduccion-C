//Bibliotecas

//Constantes
const int ITERACIONES = 4; 
const int SENTIDO1_TIME = 30000;//Tiempo que durará la sencuencia en sentido 1
const int SENTIDO2_TIME = 90000;//Tiempo que durará la sencuencia en sentido 2

//Variables
double timeNow, timeLast, timeLast_lv1;//Variables de control de tiempo
int contador_v = 0;//Contador de veces
bool sentido1_bandera = 0;
bool sentido2_bandera = 0;

void setup () {
    // Cuerpo del void setup ()
    timeLast = millis ();
    timeLast_lv1 = millis ();
}//Fin de void setup ()

void loop (){

    //Contador general de tiempo
    timeNow = millis ();

    //Contador de Iteraciones
    if (contador_v < ITERACIONES) {
        //Secuencia que da valores de tiempo diferentes sentidos
        if ((timeNow - timeLast_lv1 < SENTIDO1_TIME) && (sentido1_bandera == 0 && sentido2_bandera == 0)){
            //Ascendente exclusiva

            //Ascendente aditiva

            //Descendente exclusiva

            //Descendente aditiva            

            //Cuando terminen las secuencias, cambiar valores de bandera
            //Actualizar timelast_lv1 cuando haya pasado SENTIDO1_TIME completo
            if (timeNow - timeLast_lv1 >= SENTIDO1_TIME) {
                timeLast_lv1 = millis ();
                sentido1_bandera = 1;
            }//Fin de if (timeNow - timeLast_lv1 >= SENTIDO1_TIME)
        }
        if ((timeNow - timeLast_lv1 > SENTIDO2_TIME) && (sentido1_bandera == 1 && sentido2_bandera == 0)) {
            //Ascendente exclusiva

            //Ascendente aditiva

            //Descendente exclusiva

            //Descendente aditiva 

            //Incrementar en 1 contador_v

            //Cuando terminen las secuencias, cambiar valores de bandera
            //Actualizar timelast_lv1 cuando haya pasado SENTIDO2_TIME completo
            if (timeNow - timeLast_lv1 >= SENTIDO2_TIME) {
                timeLast_lv1 = millis ();
                sentido2_bandera = 1;
            }//Fin de if (timeNow - timeLast_lv1 >= SENTIDO2_TIME)
        }
        //Secuencia para detectar cuando se han completado ambas secuencias e incrementar el contador
        if (sentido1_bandera == 1 && sentido2_bandera == 1) {
            sentido1_bandera = 0;
            sentido2_bandera = 0;
            contador_v++;
        }//Fin de if (sentido1_bandera == 1 && sentido2_bandera == 1)


    }//Fin de if (contador_v < ITERACIONES)

}//Fin de void loop ()

double millis () {
    //
    return (0);
}