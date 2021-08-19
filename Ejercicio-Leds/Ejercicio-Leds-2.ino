//Bibliotecas

//Constantes
const int ITERACIONES = 4;//Cantidad de veces a repetir el programa
const int SENTIDO1_TIME = 30000;//Tiempo que durará la sencuencia en sentido 1
const int SENTIDO2_TIME = 90000;//Tiempo que durará la sencuencia en sentido 2
const int SECUENCIA_TIME = 5000;//Tiempo que durará secuencia de leds
const int SECUENCIA_LED = 200;//Tiempo que tarda en cambiar un led

//Variables
double timeNow, timeLast, timeLast_lv1, timeLast_lv2, timeLast_lv3;//Variables de control de tiempo
int contador_v = 0;//Contador de veces
bool sentido1_bandera = 1;
bool sentido2_bandera = 0;
bool as_ex = 0;
bool as_ad = 0;
bool de_ex = 0;
bool de_ad = 0;
int secuencia_tipo = 0;
int secuencia_sentido = 0;

void setup () {
    // Cuerpo del void setup ()
    timeLast = millis ();
    timeLast_lv1 = millis ();
    timeLast_lv2 = millis ();
    timeLast_lv3 = millis ();
}//Fin de void setup ()

void loop (){

    //Contador general de tiempo
    timeNow = millis ();

    //Contador de Iteraciones
    if (contador_v < ITERACIONES) {
        //Secuencia que da valores de tiempo diferentes sentidos
        if ((timeNow - timeLast_lv1 < SENTIDO1_TIME) && (sentido1_bandera == 0 && sentido2_bandera == 0)){

            //Se deben realizar las siguientes secuencias
            //Ascendente exclusiva = 0
            //Ascendente aditiva = 1
            //Descendente exclusiva = 2
            //Descendente aditiva = 3

            //Se puede crear una función que ejecute cualquier sentido de secuencia y lo aplique
            //a los leds segun condiciones de llamado.

            //Se proponen el siguiente parámetro
            //secuencia_tipo toma los valores 0, 1, 2 y 3, indica los 4 tipos de secuencia a realizar

            //Los valores de dichas parpametros se determinan segun funciones de tiempo
            if (timeNow - timeLast_lv3 > SECUENCIA_TIME) {
                secuencia_tipo++;
                secuencia_tipo %=  4;
                timeLast_lv3 = millis ();
            }

            if (timeNow - timeLast_lv2 < SECUENCIA_LED) {
                actualiza_leds (secuencia_tipo);
                timeLast_lv2 = millis ();
            }           
                      

            //Cuando terminen las secuencias, cambiar valores de bandera
            //Actualizar timelast_lv1 cuando haya pasado SENTIDO1_TIME completo
            if (timeNow - timeLast_lv1 >= SENTIDO1_TIME) {
                timeLast_lv1 = millis ();
                sentido1_bandera = 1;
            }// Fin de if (timeNow - timeLast_lv1 >= SENTIDO1_TIME)
        }
        if ((timeNow - timeLast_lv1 > SENTIDO2_TIME) && (sentido1_bandera == 1 && sentido2_bandera == 0)) {
            //Se deben realizar las siguientes secuencias
            //Ascendente exclusiva
            //Ascendente aditiva
            //Descendente exclusiva
            //Descendente aditiva

            //Se puede crear una función que ejecute cualquier sentido de secuencia y lo aplique
            //a los leds segun condiciones de llamado.

            //Se proponen el siguiente parámetro
            //secuencia_tipo toma los valores 0, 1, 2 y 3, indica los 4 tipos de secuencia a realizar

            //Los valores de dichas parpametros se determinan segun funciones de tiempo
            if (timeNow - timeLast_lv3 > SECUENCIA_TIME) {
                secuencia_tipo++;
                secuencia_tipo %=  4;
                timeLast_lv3 = millis ();
            }

            if (timeNow - timeLast_lv2 < SECUENCIA_LED) {
                actualiza_leds (secuencia_tipo);
                timeLast_lv2 = millis ();
            }

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