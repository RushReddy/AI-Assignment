#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char pollutant[20];
    float value;
    float pm25 = 0;

    fp = fopen("data.txt", "r");

    if(fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    // Reading sensor data from file
    while(fscanf(fp, "%s %f", pollutant, &value) != EOF)
    {
        if(strcmp(pollutant, "PM25") == 0)
        {
            pm25 = value;
        }
    }

    fclose(fp);

    printf("PM2.5 Value: %.2f\n", pm25);

    // Simple Reflex Agent Rules
    if(pm25 <= 50)
        printf("AQI Category: Good\n");
    else if(pm25 <= 100)
        printf("AQI Category: Satisfactory\n");
    else if(pm25 <= 200)
        printf("AQI Category: Moderate\n");
    else if(pm25 <= 300)
        printf("AQI Category: Poor\n");
    else if(pm25 <= 400)
        printf("AQI Category: Very Poor\n");
    else
        printf("AQI Category: Severe\n");

    return 0;
}
