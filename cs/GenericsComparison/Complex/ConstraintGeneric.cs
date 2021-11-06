namespace Complex
{
    public interface IDummy
    {
        
    }
    
    public class ConstraintGeneric<T> where T: IDummy
    {
        private T Dummy { get; set; }
    }
}