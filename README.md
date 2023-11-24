# Oxímetro para medir saturação de oxigênio e frequência cardíaca
https://youtu.be/ImVPjLgMAHM - link do vídeo</br>
Nosso projeto utiliza um ESP32 para capturar dados de um oxímetro e fornecer ao código em python

## integantes
- RM:98460 -  Felipe Capriotti da Silva Santos
- RM:99679 - Gustavo Kawamura Cristofani

## Problema de Saúde Abordado

Um dos desafios críticos é a demora na identificação de sintomas e a busca por assistência médica, muitas vezes resultando em diagnósticos tardios e tratamentos menos eficazes. Além disso, a limitação dos sistemas de saúde em lidar com grandes volumes de pacientes, especialmente em situações de crise como a pandemia, destaca a urgência de soluções que permitam uma triagem mais eficiente e acessível.

## **Solução Proposta**

A solução proposta neste trabalho consiste no desenvolvimento e implementação de um sistema abrangente de triagem médica remota, integrando tecnologias inovadoras para possibilitar a monitorização contínua da saúde dos usuários. A proposta visa combinar dispositivos wearables, como smartwatches e sensores biométricos, com aplicativos móveis e algoritmos de inteligência artificial para criar um ecossistema de saúde conectado e adaptável.

## **Configuração e Execução**

1. **Configuração do Ambiente:**
   - Certifique-se de ter o Arduino IDE instalado com suporte para ESP32.
   - Instale as bibliotecas necessárias (WiFi, PubSubClient).

2. **Configuração do MQTT:**
   - Substitua as constantes `SSID`, `PASSWORD`, `BROKER_MQTT`, `TOPICO_SUBSCRIBE`, `TOPICO_PUBLISH`, `TOPICO_PUBLISH_2`, e `ID_MQTT` com suas configurações específicas.

3. **Configuração do Hardware:**
   - Conecte o Potenciómetro ao ESP32 e led bar como pede o código.

4. **Execução:**
   - Carregue o código no ESP32 usando o Arduino IDE.
   - Abra o monitor serial para verificar as leituras dos sensores e os status de conexão MQTT.
   - Utilize um cliente MQTT para monitorar e controlar o ambiente através dos tópicos definidos.

## **Simulação no Wokwi**

Nosso código do projeto mais simulação pode ser encontrado no Wokwi neste link [Clique aqui para acessar a simulação](https://wokwi.com/projects/382033438658785281)). 
                                                                                                               
