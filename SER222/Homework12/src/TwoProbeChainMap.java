import java.util.LinkedList;
import java.util.Queue;
/**
 * Created by shinyayamamoto on 2016/10/02.
 * Two- probe hashing means that you will hash to two positions,
 * and insert the key in the shorter of the two chains at those two positions.
 */
public class TwoProbeChainMap<Key, Value> implements Map<Key, Value>  {

    private class Entry {
        public Key key;
        public Value value;
        public Entry (Key k, Value v) {
            key = k;
            value = v;
        }
    }

    private int N; // number of key-value pairs
    private int M; // hash table size
    private LinkedList<Entry>[] entries;

    public TwoProbeChainMap() {
        this(997);
    }

    public TwoProbeChainMap(int M) {
        this.N = 0;
        this.M = M;
        entries = new LinkedList[M];
        for (int i = 0; i < M; i++)
            entries[i] = new LinkedList<>();
    }

    //TODO: Proper hash calculations. [5 points]
    //∗ For the  rst hash function, use: hash(k)=(k.hashCode() & 0x7fffffff) % M.
    //∗ For the second hash function, use: hash2(k)= (((k.hashCode() & 0x7fffffff) % M) * 31) % M.
    private int hash(Key key) {
        return (key.hashCode() & 0x7fffffff) % M;
    }

    private int hash2(Key key) {
        return ((key.hashCode() & 0x7fffffff)* 31) % M;
    }

    //TODO: void put(Key key, Value val) - see interface.
    @Override
    public void put(Key key, Value val) {
        boolean added = false;

        for(Entry entry : entries[hash(key)])
            if(key.hashCode() == entry.key.hashCode()) {
                entry.value = val;
                added = true;
            }
        added = true;

        if(!added) {
            if (hash(key) < hash2(key)) {
                entries[hash(key)].add(new Entry(key, val));
            } else {
                entries[hash2(key)].add(new Entry(key, val));
            }
            N++;
        }
    }
    //TODO: Value get(Key key) - see interface. [10 points]
    @Override
    public Value get(Key key) {

        for(Entry entry : entries[hash(key)]) {
            if (key.hashCode() == entry.key.hashCode()) {
                return entry.value;
            }
        }
        if (hash2(key) < M && 0 <= hash2(key)){
            for(Entry entry : entries[hash2(key)]) {
                if (key.hashCode() == entry.key.hashCode()) {
                    return entry.value;
                }
            }
        }

        return null;
    }
    //TODO: void remove(Key key) - see interface. [10 points]
    @Override
    public void remove(Key key) {
        if(contains(key)) {
            Entry target = null;
            if (target == null) {
                for (Entry e : entries[hash(key)]) {
                    if (e.key == key) {
                        target = e;
                        entries[hash(key)].remove(target);
                        N--;
                    }
                }
            }
            if (target == null) {
                for(Entry e : entries[hash2(key)]) {
                    if (e.key == key) {
                        target = e;
                        entries[hash2(key)].remove(target);
                        N--;
                    }
                }
            }
        }
    }



    /////////////////////////////////////////////////
    @Override
    public int size() {
        return N;
    }

    @Override
    public boolean isEmpty() {
        return N == 0;
    }

    @Override
    public boolean contains(Key k) {
        return get(k) != null;
    }
    @Override
    public Iterable<Key> keys() {
        Queue<Key> queue = new LinkedList<>();

        for (int i = 0; i < M; i++)
            for(Entry e : entries[i])
                queue.add(e.key);

        return queue;
    }

}
