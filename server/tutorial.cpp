#include <iostream>

#include <boost/beast.hpp>
#include <boost/beast/ssl.hpp>
#include <boost/asio.hpp>
#include <boost/asio/ssl.hpp>
namespace net = boost::asio;
namespace beast = boost::beast;
using namespace boost::beast;
using namespace boost::beast::websocket;

net::io_context ioc;
tcp_stream sock(ioc);
net::ssl::context ctx(net::ssl::context::tlsv12);

int main() {
  std::cout << "ECH" << std::endl;
  return 0;
}