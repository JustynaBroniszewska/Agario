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
  // auto const address = net::ip::make_address('0.0.0.0');
  // auto const port = static_cast<unsigned short>(std::atoi(8080));
  int lol = 3;
  std::cout << "ECH" << std::endl;
  // std::cout << port << std::endl;
  std::cout << "lol" << std::endl;
  return 0;
}