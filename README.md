Запустить приёмник:
```
gcc -o e emitter.c && ./e
```

Отправить сигнал: 
```
gcc -o e emitter.c && ./e <PID> <SIGNAL>
```

Где:
\<PID> - ID, который отображается в приёмнике

\<SIGNAL> - SIGUSR1 или SIGUSR2
