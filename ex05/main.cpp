#include "Harl.hpp"
#include <unistd.h>

int main()
{
    //test 1 uncomment sleep for relistic robot like given text
    Harl harli;
    harli.complain("debug");
    // sleep(1);
    harli.complain("info");
    // sleep(1);
    harli.complain("warning");
    // sleep(1);
    harli.complain("error");

    //test2
    // std::string arr[] = {"debug", "info", "warning", "error"};
    // for (int i = 0; i < 1000; i++)
    // {
    //     int j = 0;
    //     while (j < 4)
    //     {
    //         harli.complain(arr[j]);
    //         j++;
    //         usleep(100000);
    //     }        
    // } run for long time
    
    return(0);
}