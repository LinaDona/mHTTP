# Networking
- We need a _listening socket_ which accepts connection requests and then creates _another socket_ which handles that specific connection.
- The _connection socket_ will now receive HTTP requests and send HTTP responses.

# Structure
- To ensure we can use parts of the code in other places (or projects), we need to modularize things.
- Use a global namespace for this particular project/library and underlying namespaces when needed.
- Probably start with a Networking/ dir inside of which exist Socket/ and Server/ and maybe Client/ dirs