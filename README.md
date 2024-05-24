# edge-04-sprint
<hr>

### Membros:

Iago Diniz RM: 553776 <br>
Pedro Henrique RM: 552746 <br>
Micael Azarias RM: 552699 <br>
Felipe Nakama RM: 552821
<hr>


### observações:
Optamos por criar 2 tipos diferentes de circuitos, o primeiro dele um básico com o DHT11 ultilizando o esp32, Tago e o Node-Red, e o segundo erá com a nossa ideia original mas no Arduino Uno, com o sensor de cor TCS230, o sensor de cores não foi compativel com o esp32 e o Node-Red, alem disso, alguns fios e cabos da Fiap não estavam reconhecendo as entradas do TCS230, por isso optamos por criar esses 2 circuitos, um com o intuito de concluir as tarefas pedidas e um com a ideia original.
<hr>

## Part 1 - tcs230

Sensor de Cor TCS230: Identificando Cores <BR>
Este projeto utiliza o sensor de cor TCS230 para identificar a cor de um objeto e acender um LED RGB correspondente. <br><br>

Componentes: <br>
Arduino BlackBoard (ou equivalente) <br>
Sensor de Cor TCS230 <br>
LED RGB (Vermelho, Verde, Azul) <br>
Jumpers <br>
Cabos <br><br>

Conexões: <br><br>
TCS230: <br>
S0 -> Pino 8 da BlackBoard <br>
S1 -> Pino 9 da BlackBoard <br>
S2 -> Pino 11 da BlackBoard <br>
S3 -> Pino 12 da BlackBoard <br>
OUT -> Pino 10 da BlackBoard <br><br>
LED RGB: <br>
Vermelho -> Pino 2 da BlackBoard <br>
Verde -> Pino 3 da BlackBoard <br>
Azul -> Pino 4 da BlackBoard <br><br> 

Código:<br>
O código Arduino está disponível no arquivo tcs230.ino. <br><br>

Funcionalidade: <br><br>
Inicialização: <br>
O código configura os pinos do sensor e do LED como entradas e saídas. <br>
O sensor é configurado para a frequência de amostragem padrão. <br><br>

Leitura de Cores: <br>
O código lê os valores RGB do sensor TCS230 utilizando a função leitura_cores(). <br>
O valor de cada cor (vermelho, verde, azul) é armazenado nas variáveis vermelho, verde e azul. <br><br>

Identificação de Cor: <br>
O código compara os valores RGB lidos e identifica a cor predominante. <br>
O LED RGB é acendido de acordo com a cor identificada. <br><br>

Atualização: <br>
O processo de leitura e identificação de cor é repetido continuamente. <br><br>

Observações: <br>
Este código foi escrito para a BlackBoard, mas pode ser adaptado para outras placas Arduino. <br>
Ajuste os pinos do sensor e do LED no código de acordo com sua configuração. <br>
As cores detectadas podem variar dependendo da iluminação. <br>
O sensor TCS230 mede a intensidade da luz em cada cor. <br>
A identificação da cor é feita através da comparação entre as intensidades das cores. <br><br>

Exemplo de Uso: <br>
Conecte os componentes de acordo com o diagrama de conexões. <br>
Carregue o código no Arduino. <br>
Aponte o sensor para um objeto de uma determinada cor. <br>
O LED RGB irá acender na cor correspondente. <br><br>
<hr>


## Parte 2 - Dht11
<p> 
  Neste caso ulltilizamos o DHT11 para manter o ambiente da sala do ICR em uma temperatura ambiente adequada 
</p>

### DHT11, ESP32, TAGO IO e NODE-RED
Leitura de dados do sensor DHT11 com ESP32, Node-RED, MQTT e TagoIO. <br>
Este projeto demonstra como coletar dados de um sensor DHT11 usando um ESP32, processá-los no Node-RED, publicar no HiveMQ MQTT e visualizar os dados no TagoIO.
<br><br>

Componentes: <br>
ESP32: Microcontrolador responsável por ler os dados do sensor DHT11. <br>
Sensor DHT11: Sensor de temperatura e umidade. <br>
Node-RED: Plataforma de automação de fluxo para processar os dados do DHT11. <br>
TagoIO MQTT: Plataforma de IoT para visualizar e analisar os dados. <br>
<br> <br>

Pré-requisitos: <br>
ESP32: Com o firmware Arduino instalado. <br>
Node-RED: Instalado e configurado com o nó MQTT. <br>
TagoIO: Conta gratuita do TagoIO. <br>
Biblioteca DHT: Instalada no ESP32. <br>
<br><br>

Conexões: <br>
ESP32 e DHT11: Conecte o sensor DHT11 ao ESP32 de acordo com o diagrama de conexões. <br>
ESP32 e HiveMQ: Configure o ESP32 para publicar dados MQTT no tópico desejado no HiveMQ. <br>
Node-RED e HiveMQ: Configure o nó MQTT no Node-RED para se conectar ao HiveMQ e assinar o tópico desejado. <br>
Node-RED e TagoIO: Configure o nó TagoIO no Node-RED para enviar dados ao TagoIO. <br>
<br><br>

Configuração: <p/>
ESP32: <br>
Carregue o código do ESP32 (disponível em codigo_esp32.ino) no dispositivo. <br>
Configure o código com as credenciais MQTT (usuário, senha, endereço do broker e tópico). <p/>

Node-RED: <br>
Crie um fluxo no Node-RED com os seguintes nós: <br>
Function: Para processar os dados recebidos do MQTT. <br>
TagoIO: Configurado para enviar os dados ao TagoIO. <br>
Importe os nós necessários do package.json. <p/>

TagoIO: <br>
Crie um novo dispositivo no TagoIO. <br>
Crie um novo widget no TagoIO para visualizar os dados do sensor. <br>
Configure o widget para receber dados do dispositivo criado. <br><br>

Fluxo de Dados: <br>
O ESP32 lê os dados do sensor DHT11. <br>
O ESP32 publica os dados no HiveMQ MQTT. <br>
O Node-RED recebe os dados do HiveMQ MQTT. <br>
O Node-RED processa os dados e os envia ao TagoIO. <br>
Os dados são exibidos no widget do TagoIO. <br>

