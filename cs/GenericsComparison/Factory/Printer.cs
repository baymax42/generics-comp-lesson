namespace Factory
{
    public interface IPrinter
    {
        void Print<T>(T data);
    }
}