#include <pgmspace.h>

#define SECRET

const char WIFI_SSID[] = "WIFI SSID";          // TAMIM2.4G
const char WIFI_PASSWORD[] = "PASSWORD"; // 0544287380

#define THINGNAME "AWS THING NAME"

int8_t TIME_ZONE = -5; // NYC(USA): -5 UTC

const char MQTT_HOST[] = "AWS ENDPOINT";

static const char cacert[] PROGMEM = R"EOF(
CA CERTIFICATE OF AWS IOT CORE
)EOF";

// Copy contents from XXXXXXXX-certificate.pem.crt here ▼
static const char client_cert[] PROGMEM = R"KEY(
 ".crt FILE"
)KEY";

// Copy contents from  XXXXXXXX-private.pem.key here ▼
static const char privkey[] PROGMEM = R"KEY(
"PRVATE KEY"
)KEY";
