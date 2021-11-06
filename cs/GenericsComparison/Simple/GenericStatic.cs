namespace Example.simple
{
    public class GenericStatic<T> where T: new()
    {
        public static T Attr { get; set; }
    }
}