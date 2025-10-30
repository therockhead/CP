void BubbleSort()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            if (t[j] > t[j + 1])
            {
                swap(t[j], t[j+1]);
            }
        }
    }
}
