#include <iostream>
#include <Api1553.h>

AiUInt32  ulModHandle           = 0;
AiReturn            ret               = 0;


AiReturn TemplateSample(AiUInt32 ulModHandle)
{
    AiReturn ret = 0;

    printf("Running TemplateSample \n");

    return ret;
}


int main(int argc, char **argv) {
  std::cout << "Hello World" << std::endl;

  ret = TemplateSample(ulModHandle);

  return 0;
}
