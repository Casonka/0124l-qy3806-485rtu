#ifndef QY3806_485RTU_H_
#define QY3806_485RTU_H_

typedef struct {
/*---------------------------------------*/
    UART_HandleTypeDef *interface;
    uint16_t encoder_address;
/*---------------------------------------*/
    int encoder_reverse_flag : 1;

    float encoder_angle;
    float encoder_velocity;
/*---------------------------------------*/
}qy3806_485rtu_t;

qy3806_485rtu_t qy3806_init(UART_HandleTypeDef *interface, uint16_t address);

void qy3806_send(qy3806_485rtu_t *object);


#endif /* QY3806_485RTU_H_ */
