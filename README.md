# SNHU Portfolio

## CS210 Project 3 - Grocery Tracker

- I designed a modular and object-oriented solution using a `GroceryTracker` class that cleanly encapsulates file reading and frequency counting using a `std::map`.
- I could improve the code by allowing case-insensitive input (for example, recognizing "apples" and "Apples" as the same item) and supporting multi-word items using `getline()` instead of `cin`.
- The most challenging part was getting the map to correctly track frequencies while maintaining the required output format and generating the histogram cleanly.

### Transferable Skills

- File I/O operations
- Working with maps and associative containers
- Modular class design and encapsulation
- Input validation and user interaction

---

## CS330 Project - 3D Scene

### How do I approach designing software?

This project taught me to break a complex problem into smaller, manageable pieces. Rather than trying to build the entire scene at once, I designed and tested one object at a time before integrating it into the final environment. I followed an iterative design process by planning object placement, scaling, textures, lighting, and camera movement, then refining each component through testing. This approach can be applied to future software projects by reducing complexity and making debugging easier.

### How do I approach developing programs?

Working on this project reinforced the importance of incremental development. I implemented one feature at a time, verified that it worked, and then moved on to the next milestone. As the project progressed, my debugging process became more systematic by relying on documentation, isolating problems, and testing individual changes instead of making multiple modifications at once. This iterative approach resulted in a more stable and maintainable final project.

### How can computer science help me in reaching my goals?

This project strengthened my understanding of C++, computational graphics, and the mathematics behind 3D transformations, lighting, and textures. Although I do not plan to pursue graphics programming professionally, the problem-solving, debugging, and software design skills I developed are directly applicable to my future coursework and my career in software and infrastructure engineering. The project also reinforced the importance of reading documentation and approaching complex technical challenges methodically.


---

## CS340 Project Two - Grazioso Salvare Dashboard

### How do you write programs that are maintainable, readable, and adaptable?

I try to keep different parts of a program separated based on their purpose. In this project, the CRUD Python module handled communication with MongoDB while the dashboard handled the user interface and visualization of the data. This made the code easier to read and allowed me to reuse the same `AnimalShelter` class from Project One in Project Two instead of rewriting the database connection and query code. A module like this could also be reused in other applications that need access to the same database, such as another dashboard, an API, or an administrative tool.

### How do you approach a problem as a computer scientist?

I approached this project by breaking the requirements into smaller pieces and getting each part working before moving on. I first made sure the CRUD module could communicate with MongoDB, then built the data table, rescue filters, map, and breed chart. I tested each filter separately before putting everything together. This project felt more like building an actual application than many previous assignments because several different technologies had to work together. In the future, I would use the same approach by first understanding the client's requirements, designing the database around the data that needs to be retrieved, and then building and testing each part incrementally.

### What do computer scientists do, and why does it matter?

Computer scientists use technology to solve problems and make information easier to work with. In the Grazioso Salvare project, the animal shelter dataset contains thousands of records that would be difficult to search manually. The dashboard turns that data into something useful by allowing rescue staff to quickly identify animals that meet specific training requirements and visualize the results. A system like this can reduce the amount of time spent searching through data and allow an organization to focus more of its time on its actual work.