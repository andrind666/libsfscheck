#include "imei_validator.h"

bool IMEIValidator::isValidIMEI(const std::string &imei) {
    return imei.length() >= 14;
}
