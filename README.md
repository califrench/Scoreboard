# About the Scoreboard

## Design: We were given an abstract class that defines the functionality of a scoreboard. We then decided on a good data structure and implemented the functionality to work correctly with our data structure.


## Design Patterns

Our Scoreboard implementation leverages two common structural design patterns:  
- Adapter  
- Proxy

### Adapter

The **adapter** design pattern converts the interface of an underlying strucure to another interface.  

In our case, we are converting the interface of a vector of vectors into a matrix-like interface to access and set scores.  
On top of providing a simpler interface to a 2D vector, our scoreboard also provides safety checks for out of bounds indices.

>Convert the interface of a class into another interface clients expect. An adapter lets classes work together that could not otherwise because of incompatible interfaces. The enterprise integration pattern equivalent is the translator.  

For more information about the **adapter** pattern, please refer to [the Wikipedia article on the adapter pattern](https://en.wikipedia.org/wiki/Adapter_pattern)

### Proxy

Our scoreboard implementation also leverages the **proxy** design pattern.  
Indeed, our scoreboard is acting as a proxy to a vector of vectors to provide access to it. This is also how we are restricting access, preventing the resizing of the internal vectors and checking for out of bounds access.

>Provide a surrogate or placeholder for another object to control access to it.  

For more information about the **proxy** pattern, please refer to [the Wikipedia article on the proxy pattern](https://en.wikipedia.org/wiki/Proxy_pattern)