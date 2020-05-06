## Laboratory work XIII

<a href="https://github.com/kulbitsky99/industrial_programming_acronis_2020/screencast/tmux.mkv"><img src="https://github.com/kulbitsky99/industrial_programming_acronis_2020/screencast/vivid.jpg" width="640"/></a>

Данная лабораторная работа посвещена изучению терминального мультиплексора tmux.


## Tasks

- [ ] 1. Создать публичный репозиторий с названием **lab_tmux** и с лиценцией **MIT**
- [ ] 2. Ознакомиться со ссылками учебного материала
- [ ] 3. Выполнить инструкцию учебного материала
- [ ] 4. Составить отчет, показать друзьям и наслаждаться жизнью, ведь она не такая уж и долгая

## Tutorial



```ShellSession
$ sudo apt install tmux
$ tmux new-session -s test
```

```ShellSession
# commands
ctrl+b c
ctrl+b 0
ctrl+b 1
ctrl+b %
ctrl+b < > ^
ctrl+b d # detach from session
tmux attach -t test
```

```ShellSession
vim ~/.tmux.conf
  set-option -g prefix C-q
  set -g mouse on
$ tmux new-session -s dev

$ tmux source ~/.tmux.conf

$ tmux kill-server
```



## Links

- [tmux wiki page](https://github.com/tmux/tmux/wiki)
- [tmux helper](https://habr.com/ru/post/327630/)
- [Youtube tutorial](https://www.youtube.com/watch?v=1Y2CD4WnbP0)

```
Copyright (c) 2015-2020 The Kulby Factory
```
