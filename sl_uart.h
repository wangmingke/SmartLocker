/*
$copyright$
*/

#ifndef __SL_UART_H__
#define __SL_UART_H__

class SLUart {
public:
  SLUart();
  ~SLUart();
  open(std::string port, int flag); 
  close();
  read();
  write();

private:
  FILE *fd;
}

#endif
