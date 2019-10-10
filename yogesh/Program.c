#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double geometric_mean(int n, double data[])
{
    double sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += log(data[i]);
    }
    return exp(sum/n);
}

double arithmetic_mean(int n, double data[])
{
    double sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += data[i];
    }
    return sum/n;
}

void sort(int n, double data[])
{
    for (int i = 0; i < n-1; ++i)
    {
        for (int j = i+1; j < n; ++j)
        {
            if(data[i]>data[j])
            {
                double temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

double median(int n, double data[])
{
    sort(n, data);
    if(n&1)
        return data[n/2];
    else
        return (data[n/2] + data[(n-1)/2])/2;
}

double mode(int n, double data[])
{
    double maxValue = 0, maxCount = 0;

    for (int i = 0; i < n; ++i)
    {
        int count = 0;

        for (int j = 0; j < n; ++j)
        {
            if (data[j] == data[i])
                ++count;
        }

        if (count > maxCount)
        {
            maxCount = count;
            maxValue = data[i];
        }
    }
    return maxValue;
}
int main()
{
    FILE *read_ptr = fopen("data.txt", "r");
    double data[100];
    int n=0;
    while(!feof(read_ptr))
    {
        char temp[10];
        fgets(temp, 10, read_ptr);
        data[n] = (double)atof(temp);
        n++;
    }
    fclose(read_ptr);

    FILE *write_ptr = fopen("result.txt", "w");
    fprintf(write_ptr, "Geometric Mean : %.2lf\n", geometric_mean(n, data));
    fprintf(write_ptr, "Arithmetic Mean : %.2lf\n", arithmetic_mean(n, data));
    fprintf(write_ptr, "Median : %.2lf\n", median(n, data));
    fprintf(write_ptr, "Mode : %.2lf\n", mode(n, data));
    fclose(write_ptr);
}