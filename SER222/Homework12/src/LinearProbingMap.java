import java.util.LinkedList;
import java.util.Queue;
/**
 * Created by shinyayamamoto on 2016/10/02.
 */
public class LinearProbingMap<Key, Value> implements Map<Key, Value>  {

    private int N; // number of key-value pairs
    private int M; // hash table size
    private LinkedList<Entry>[] entries;
    private int i;

    //TODO: Proper hash calculations. [5 points]
    /**
     * An decent way to structure the hash function is: hash(k, i) = ((k.hashCode() & 0x7fffffff) + i) % M,
     * where k is the key and i is the number of collisions. Each time there is a collision,
     * i should be incremented so that the hash increases by 1.
     * An example hash sequence might look like: 587, 588, 589, 590, 581...
     */
    private int hash(Key key) {
        return ((key.hashCode() & 0x7fffffff) + i) % M;
    }

    //TODO:  a constructor that defaults to an array of size 997
    LinearProbingMap() {
        this.i = 0;
        this.N = 0;
        this.M = 997;
        entries = new LinkedList[M];
        for (int i = 0; i < M; i++)
            entries[i] = new LinkedList<>();
    }

    //TODO: void put(Key key, Value val) - see interface. [10 points]
    @Override
    public void put(Key key, Value val) {
        if(!contains(key)) {
            int validIndex = hash(key);
            if(validIndex < M && 0 <= validIndex) {
                while (entries[validIndex] == null) {
                    //collision
                    this.i++;
                    validIndex++;
                    if (validIndex > M) {
                        validIndex = 0;
                    }
                }
                entries[validIndex].add(new Entry(key, val));
                N++;
            }
        }
    }


    //TODO: Value get(Key key) - see interface. [10 points]
    @Override
    public Value get(Key key) {

        for(Entry entry : entries[hash(key)])
            if(key.hashCode() == entry.key.hashCode())
                return entry.value;

        return null;
    }

    //TODO: void remove(Key key) - see interface.
    @Override
    public void remove(Key key) {
        if(contains(key)) {
            Entry target = null;
            for(Entry e : entries[hash(key)])
                if(e.key == key)
                    target = e;

            entries[hash(key)].remove(target);
            N--;
        }
    }
    //TODO: boolean contains(Key key) - see interface.
    @Override
    public boolean contains(Key k) {
        return get(k) != null;
    }

    //TODO: boolean isEmpty() - see interface. [3 points]
    @Override
    public boolean isEmpty() {
        return N == 0;
    }

    //TODO:int size() - see interface. [3 points]
    @Override
    public int size() {
        return N;
    }

    //TODO: Iterable<Key> keys() - see interface. [3 points]
    @Override
    public Iterable<Key> keys() {
        Queue<Key> queue = new LinkedList<>();

        for (int j = 0; j < M; j++)
            for(Entry e : entries[j])
                queue.add(e.key);

        return queue;
    }

    //////////////////////////////////////////////////////////////////////////////////////
    private class Entry {
        public Key key;
        public Value value;
        public Entry (Key k, Value v) {
            key = k;
            value = v;
        }
    }

}
