const hello_world_express = require('express');
const hello_world_app = hello_world_express();

hello_world_app.get('/', (req, res) => {
  res.send('Hello World');
});
