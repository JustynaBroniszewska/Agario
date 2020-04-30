const basicWebsocket = () => {
  const webSocket = new WebSocket('ws://localhost:3030');
    webSocket.onopen = () => {
      webSocket.send(JSON.stringify({hej: 'hejeczka'}));};
    webSocket.onmessage = (event) => {
      const message = event.data;
      document.getElementById('server-message').innerHTML = message;
    }
};

basicWebsocket();
