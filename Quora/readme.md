# REST (Representational State Transfer)

REST is an architectural style that defines a set of constraints to be used for creating web servers.
___

## CRUD Operations - 

CRUD is an acronym that stands for the four basic operations performed on persistent data:

*   **Create:** Adds new data to the system.
*   **Read (Retrieve):** Retrieves existing data from the system.
*   **Update:** Modifies existing data in the system.
*   **Delete:** Removes existing data from the system.

These operations are fundamental in most applications that interact with databases or data storage.
___

| Method | Description                         |
|--------|-------------------------------------|
| **GET** | Retrieves resources                |
| **POST** | Submits new data to the server     |
| **PUT** | Updates existing data              |
| **PATCH** | Updates existing data partially   |
| **DELETE** | Removes data                     |

___

**CRUD and RESTful APIs:**

CRUD operations map directly to HTTP methods in RESTful APIs:

*   **Create:** `POST`
*   **Read:** `GET`
*   **Update:** `PUT` (full update) or `PATCH` (partial update)
*   **Delete:** `DELETE`