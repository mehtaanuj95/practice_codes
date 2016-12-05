#basic example of threading in python
import threading

class Count(threading.Thread):
    def run(self):
        for _ in range(10):
            print(threading.current_thread().getName())

x = Count(name = "A")
y = Count(name = "B")

x.start()
y.start()