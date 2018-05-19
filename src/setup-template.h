using namespace std;

#define WIFI_SSID "SSID"
#define WIFI_PASSWORD "PASSWORD"

#define MQTT_SERVER "DOMAIN_OR_IP"
#define MQTT_USER "USERNAME"
#define MQTT_PASSWORD "PASSWORD"
#define MQTT_PORT 1883
#define MQTT_STATE_TOPIC_PREFIX "sensor/" // e.g. sensor/<deviceName> and sensor/<deviceName>/set
#define DEVICE_NAME "pir001"

#define OTA_PASSWORD "PASSWORD" // The password you will need to enter to upload remotely via the ArduinoIDE
#define OTA_PORT 8266

#define SENSOR_PIN D8
