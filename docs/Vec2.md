# Vec2

## Purpose

`Vec2` represents a two-dimensional mathematical vector.

It is the fundamental building block of the physics engine and will be used to represent:

- Position
- Velocity
- Acceleration
- Force
- Direction
- Displacement

---

## Current Features

### Constructors

- Default constructor
- Parameterized constructor

### Arithmetic Operators

Implemented:

- `+`
- `-`
- `*` (scalar multiplication)
- `/` (scalar division)
- `+=`
- `-=`
- `*=`
- `/=`

---

## Design Decisions

### Public Members

`x` and `y` are public.

This keeps mathematical expressions concise and follows the design used by many math libraries (e.g. SFML, GLM).

Example:

```cpp
Vec2 velocity(3.0f, 4.0f);

velocity.x += 2.0f;
```

instead of

```cpp
velocity.setX(velocity.getX() + 2.0f);
```

---

### Operator Overloading

Arithmetic operators are overloaded so vectors behave like mathematical objects.

Example:

```cpp
Vec2 c = a + b;

Vec2 d = a * 5.0f;

a += b;
```

---

### Const Correctness

Functions that do not modify the vector are marked `const`.

Example:

```cpp
Vec2 operator+(const Vec2& other) const;
```

This guarantees that addition does not modify either operand.

---

## Planned Features

Vector Operations

- [ ] lengthSquared()
- [ ] length()
- [ ] normalized()
- [ ] normalize()
- [ ] dot()

Comparison

- [ ] ==
- [ ] !=

Future

- [ ] cross()
- [ ] distance()
- [ ] distanceSquared()
- [ ] angle()
- [ ] rotate()
- [ ] perpendicular()