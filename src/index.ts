import { createServer } from 'https';
import express from 'express';
import { address as _address } from 'ip';

const port = 8443;
const address = _address();

const app = express();

const server = createServer(app);
server.listen(port, () => {
  console.log(`\x1b[32mready \x1b[0m- started server on url: https://localhost:${port}`);
  console.log(`\x1b[36minfo \x1b[0m- access over network at: ${address}:${port}`);
})