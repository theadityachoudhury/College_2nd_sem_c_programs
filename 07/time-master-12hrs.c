#include <stdio.h>
void main()
{
    int hh1, mm1, m1, hh2, mm2, m2, a, b, c;
    printf("Enter The First Time:- ");
    scanf("%d:%d:%d", &hh1, &mm1, &m1);
    printf("Enter The Second Time:- ");
    scanf("%d:%d:%d", &hh2, &mm2, &m2);
    if ((hh1 > 0 && hh1 < 13) && (mm1 >= 0 && mm1 < 61) && (hh2 > 0 && hh2 < 13) && (mm2 >= 0 && mm2 < 61))
    {

        if ((m1 == 0 || m1 == 1) && (m2 == 0 || m2 == 1))
        {
            if (m1 == m2)
            {
                b = m1 - m2;
                if (hh1 == hh2)
                {
                    a = 0;
                    if (mm1 == mm2)
                    {
                        printf("Both time are same!\n");
                    }
                    else if (mm1 > mm2)
                    {
                        printf("First time is greater than second time\n");
                        c = mm1 - mm2;
                    }
                    else
                    {
                        printf("Second time is greater than first time.\n");
                        c = mm2 - mm1;
                    }
                }
                else if (hh1 > hh2)
                {
                    a = hh1 - hh2;
                    printf("First time is greater than second time.\n");
                    if (mm1 == mm2)
                    {
                        c = 0;
                    }
                    else if (mm1 > mm2)
                    {
                        c = mm1 - mm2;
                    }
                    else
                    {
                        c = mm2 - mm1;
                    }
                }
                else
                {
                    printf("Second time is greater than First time.\n");
                    a = hh2 - hh1;
                    if (mm1 == mm2)
                    {
                        c = 0;
                    }
                    else if (mm1 > mm2)
                    {
                        c = mm1 - mm2;
                    }
                    else
                    {
                        c = mm2 - mm1;
                    }
                }
            }
            else
            {
                if (m1 == 0)
                {
                    printf("Second time is greater than first time.\n");
                    if (hh1 == hh2)
                    {
                        a = 0;
                        if (mm1 == mm2)
                        {
                            c = 0;
                        }
                        else if (mm1 > mm2)
                        {
                            c = mm1 - mm2;
                        }
                        else
                        {
                            c = mm2 - mm1;
                        }
                    }
                    else if (hh1 > hh2)
                    {
                        a = hh1 - hh2;
                        if (mm1 == mm2)
                        {
                            c = 0;
                        }
                        else if (mm1 > mm2)
                        {
                            c = mm1 - mm2;
                        }
                        else
                        {
                            c = mm2 - mm1;
                        }
                    }
                    else
                    {
                        a = hh2 - hh1;
                        if (mm1 == mm2)
                        {
                            c = 0;
                        }
                        else if (mm1 > mm2)
                        {
                            c = mm1 - mm2;
                        }
                        else
                        {
                            c = mm2 - mm1;
                        }
                    }
                }
                else
                {
                    if (hh1 == hh2)
                    {
                        a = 0;
                        if (mm1 == mm2)
                        {
                            c = 0;
                        }
                        else if (mm1 > mm2)
                        {
                            c = mm1 - mm2;
                        }
                        else
                        {
                            c = mm2 - mm1;
                        }
                    }
                    else if (hh1 > hh2)
                    {
                        a = hh1 - hh2;
                        if (mm1 == mm2)
                        {
                            c = 0;
                        }
                        else if (mm1 > mm2)
                        {
                            c = mm1 - mm2;
                        }
                        else
                        {
                            c = mm2 - mm1;
                        }
                    }
                    else
                    {
                        printf("First time is greater than second time.\n");
                        a = hh2 - hh1;
                        if (mm1 == mm2)
                        {
                            c = 0;
                        }
                        else if (mm1 > mm2)
                        {
                            c = mm1 - mm2;
                        }
                        else
                        {
                            c = mm2 - mm1;
                        }
                    }
                }
            }
            printf("The difference between two times is:- %d:%d", a + 12, c);
        }
        else
        {
            printf("You have entered wrong time.\n");
        }
    }
    else
    {
        printf("You have entered wrong time.");
    }
}