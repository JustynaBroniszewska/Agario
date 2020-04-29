import React, { useEffect, useState } from 'react';

const App = () => {
  const webSocket = new WebSocket('ws://localhost:3030');
  const [state, setState] = useState('');
  useEffect(() => {
    webSocket.onopen = () => {
      webSocket.send(JSON.stringify({hej: 'hejeczka'}));};
    webSocket.onmessage = (event) => {
      const message = event.data;
      setState(message);
    }
  });
  
  return (
    <div>
      Hello React!
      This is server message: {state}
    </div>
  )
};

export default App;