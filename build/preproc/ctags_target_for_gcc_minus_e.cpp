# 1 "/home/fercosmiking/Descargas/TrabajosUnity/Reto1/simpleProject.ino"
# 2 "/home/fercosmiking/Descargas/TrabajosUnity/Reto1/simpleProject.ino" 2
# 3 "/home/fercosmiking/Descargas/TrabajosUnity/Reto1/simpleProject.ino" 2

String btnState(uint8_t btnState){

  if(btnState == 0x1){
    return "ON";
  }
  else return "OFF";
}

void setup()
{
  task1();
}

void loop()
{
  task1();
}
