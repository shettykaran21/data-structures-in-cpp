# Handling collisions

1. Open Hashing

   - Chaining

2. Closed Hashing

   - Open Addressing
     1. Linear Probing
     2. Quadratic Probing
     3. Double Hashing

## Closed Hashing

### Linear Probing

```
h'(x) = (h(x) + f(i)) % buckets

where f(i) = i | i = 0, 1, 2,...
```

### Quadratic Probing

```
h'(x) = (h(x) + f(i)) % buckets

where f(i) = i*i | i = 0, 1, 2,...
```

### Double Hashing

```
h'(x) = (h1(x) + i * h2(x)) % buckets
where i = 0, 1, 2,...

h1(x) = x % buckets
h2(x) = R - (x % R) | R is the nearest prime number less than bucket size
```
