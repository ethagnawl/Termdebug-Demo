# Termdebug

## What is it?
- ["Debugger plugin using gdb" - Bram](https://github.com/vim/vim/blob/master/runtime/pack/dist/opt/termdebug/plugin/termdebug.vim#L1)
- VimScript program whichs creates windows (source, execution and GDB) and
facilitates communication between them.

## How do I get it?
- Vim 8.1
- depends on +terminal or +channel and the prompt buffer
- `:packadd termdebug` or add `packadd termdebug` to .vimrc

## How do I use it?
- `:Termdebug termdebug-demo` (requires gdb run in order to start the program)
- `:Termdebug! termdebug-demo` (runs the program automatically)
- `^W ^W to cycle between windows`

### GDB
- `break 2` or `break main`
- `run`
- `print foo`
- `next` / `step`
- `finish` (until end of current function)
- `continue` (until next breakpoint or end of program)
- `^C` (interrupt)

### Vim
- `:Run`
- `:Break`
- `:Ev[aluate] foo` / `:Evaluate 40+2`
- `:Over` / `:Step`
- `:Stop` (interrupt)

### Toolbar (if mouse is set)
- `Next` / `Step`
- `Cont`
- `Eval`
- `Stop`

## How/Why is this useful?
- The additional context provided by having the program source next to GDB is
extremely useful
- The minimal UI is very pleasant to use and flexible enough that you can use
it in the way that fits your workflow
- Demo!

## Gotchas
- Termdebug _does not_ open source file automatically. Why not? I'd like to
submit a PR which does this by default or provides an opt-in config flag.