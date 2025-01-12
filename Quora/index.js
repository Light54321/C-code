const express = require("express");
const app = express();
const path = require("path");
const { v4: uuidv4 } = require('uuid');
const methodOverride = require('method-override');

const port = 8080;

app.set("view engine", "ejs");

app.set("views", path.join(__dirname, "views")); // used to set directory view.
app.use(express.static(path.join(__dirname, "public"))); //used to send additional css and js files

app.use(methodOverride('_method')); // override with POST having ?_method=PATCH

app.use(express.urlencoded({ extended: true })); // used to handle URL encoded data.
app.use(express.json()); // used to parse json data

let posts = [
    {
        id: uuidv4(),
        username: "newton",
        content: "I seem to have been only like a boy playing on the seashore, and diverting myself in now and then finding a smoother pebble or a prettier shell than ordinary, whilst the great ocean of truth lay all undiscovered before me."
    },
    {
        id: uuidv4(),
        username: "einstein",
        content: "Two things are infinite: the universe and human stupidity; and I'm not sure about the universe."
    },
    {
        id: uuidv4(),
        username: "galileo",
        content: "You cannot teach a man anything; you can only help him discover it in himself."
    },
];

/* index route */
app.get("/posts", (req, res) => {
    res.render("index.ejs", { posts });
})

/* create route */

// creating a get request to enter a new post through a form 
app.get("/posts/new", (req, res) => {
    res.render("new.ejs");
})
// sending a post request through form to add the post
app.post("/posts/new", (req, res) => {
    let { username, content } = req.body;
    let id = uuidv4();
    posts.push({ id, username, content });
    res.redirect("http://localhost:8080/posts");
})

/* show or view route */
app.get("/posts/:id", (req, res) => {
    let { id } = req.params;
    let post = posts.find((post) => id === post.id);
    res.render("show.ejs", { post });
})

/* edit route */
app.get("/posts/:id/edit", (req, res) => {
    let { id } = req.params;
    let post = posts.find((post) => id === post.id);
    res.render("edit.ejs", { post });
})

app.patch("/posts/:id", (req, res) => {
    let { id } = req.params;
    let post = posts.find((post) => id === post.id);
    let content = req.body.content;
    post.content = content;
    res.redirect("http://localhost:8080/posts");
})

/* delete route */
app.delete("/posts/:id", (req, res) => {
    let { id } = req.params;
    let post = posts.find((post) => id === post.id);
    let index = posts.indexOf(post);
    posts.splice(index, 1);
    res.redirect("http://localhost:8080/posts");
})


app.listen(port, () => {
    console.log(`You are listening to port ${port}`);
})