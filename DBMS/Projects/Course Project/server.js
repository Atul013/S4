const express = require('express');
const bodyParser = require('body-parser');
const cors = require('cors');
const { MongoClient } = require('mongodb');

const app = express();
const PORT = process.env.PORT || 5000;

// Middleware
app.use(cors());
app.use(bodyParser.json());

// MongoDB Connection URI
const uri = 'your_mongodb_connection_string'; // Replace with your MongoDB URI
const client = new MongoClient(uri);

async function connectToDatabase() {
    try {
        await client.connect();
        console.log('Connected to MongoDB');
    } catch (err) {
        console.error('Error connecting to MongoDB:', err);
    }
}

connectToDatabase();

// Database and Collection
const database = client.db('DeadlineDrift'); // Database name
const tasksCollection = database.collection('tasks'); // Collection name

// Routes
// GET /tasks - Fetch all tasks
app.get('/tasks', async (req, res) => {
    try {
        const tasks = await tasksCollection.find({}).toArray();
        res.json(tasks);
    } catch (err) {
        console.error(err);
        res.status(500).send('Database error');
    }
});

// POST /tasks - Create a new task
app.post('/tasks', async (req, res) => {
    const { title, description, due_date } = req.body;
    if (!title || !description || !due_date) {
        return res.status(400).send('Missing required fields');
    }

    try {
        const result = await tasksCollection.insertOne({
            title,
            description,
            due_date: new Date(due_date),
            createdAt: new Date(),
        });
        res.status(201).json(result);
    } catch (err) {
        console.error(err);
        res.status(500).send('Database error');
    }
});

// PUT /tasks/:id - Update a task
app.put('/tasks/:id', async (req, res) => {
    const { id } = req.params;
    const updates = req.body;

    try {
        const result = await tasksCollection.updateOne(
            { _id: new ObjectId(id) },
            { $set: updates }
        );
        if (result.matchedCount === 0) {
            return res.status(404).send('Task not found');
        }
        res.send('Task updated');
    } catch (err) {
        console.error(err);
        res.status(500).send('Database error');
    }
});

// DELETE /tasks/:id - Delete a task
app.delete('/tasks/:id', async (req, res) => {
    const { id } = req.params;

    try {
        const result = await tasksCollection.deleteOne({ _id: new ObjectId(id) });
        if (result.deletedCount === 0) {
            return res.status(404).send('Task not found');
        }
        res.send('Task deleted');
    } catch (err) {
        console.error(err);
        res.status(500).send('Database error');
    }
});

// Start the server
app.listen(PORT, () => {
    console.log(`Server is running on port ${PORT}`);
});