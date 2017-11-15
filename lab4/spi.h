#ifndef SPI_H
#define SPI_H

#include <bcm2835.h>

class Spi
{
public:
    Spi();
    uint8_t transfer(uint8_t send_data);
};

#endif // SPI_H
