void ComboSort(int* data,int count)
{
    double gap=count;
    bool swaps =true;
    while(gap>1||swaps)
    {
        gap/=1.247330950103979;
        if(gap<1)
            gap=1;
        int i=0;
        swaps=false;
        while(i+gap<count)
        {
            int igap=i+(int)gap;
            if(data[i]>data[igap])
            {
                int temp=data[i];
                data[i]=data[igap];
                data[igap]=temp;
                swaps=true;
            }
            ++i;
        }
    }
}
