#!/usr/bin/env python3

import requests
import socket

localhost = socket.gethostbyname('localhost')
request = requests.get("http://www.google.com")
print(request)
