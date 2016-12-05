#ifndef __CC1100_H__
#define __CC1100_H__

struct CC1101{
    int spi_fd;
    int cs_fd;
};

int  cc1101_init(struct CC1101* ctx);
void cc1101_write_reg(struct CC1101* ctx, char, char);
void cc1101_write_data(struct CC1101* ctx, char*, char);
char cc1101_read_reg(struct CC1101* ctx, char);
void cc1101_read_data(struct CC1101* ctx, char *, char);
char cc1101_read_status(struct CC1101* ctx, char);
void cc1101_strobe(struct CC1101* ctx, char);
void cc1101_wait(struct CC1101* ctx, unsigned int);

#endif
