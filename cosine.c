#include <stdio.h> 
#include <sys/socket.h> 
#include <arpa/inet.h> 
#include <unistd.h> 
#include <math.h>
#include <string>

#define PORT 8000               //Select the port you want to host to

int main(int argc, char const *argv[]) 
{

//For evaluating cosine

    int degree;

    printf("Enter the angle of cosine [in degrees]\n");
    scanf("%d",&degree);

    float rad = degree*3.1415926/180;
    double cos;
    cos = 1 - pow(rad,2)/2 + pow(rad,4)/24 - pow(rad,6)/720 + pow(rad,8)/40320;

    std::string str = std::to_string(cos) + "c" + std::to_string(degree);

    const void * a = str.c_str();
//**********************************


    int sock = 0; 
    struct sockaddr_in serv_addr; 

    if ((sock = socket(AF_INET, SOCK_DGRAM, 0)) < 0) 
    { 
        printf("\n Socket creation error \n"); 
        return -1; 
    } 

    serv_addr.sin_family = AF_INET; 
    serv_addr.sin_port = htons(PORT); 
    
    inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr);       //Enter the local ip or the ip of the server you want to host to


    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) 
    { 
        printf("\nConnection Failed \n"); 
        return -1; 
    }

    send(sock , a , 50 , 0 );       //sends the data


    return 0; 
} 
