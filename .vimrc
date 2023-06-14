set nocompatible
syn on
filetype plugin on

set undofile
set undodir=~/.vim/undodir

set path+=**
set wildmenu

set expandtab

set splitbelow
set splitright

set nu rnu
set ai cin
set ts=2 sw=2
set vb t_vb=
set backspace=indent,eol,start
set autoread

no <F5> :!clang++ -O2 -std=c++17 -DDBG_MACRO_NO_WARNING -DLOCAL -fsanitize=address -I~/solution/header %:p -o %:r && echo "compile complete" && %:h/%:r<CR>
no <F6> :!clang++ -O2 -std=c++17 -DDBG_MACRO_NO_WARNING -DLOCAL -fsanitize=address -I~/solution/header %:p -o %:r && echo "compile complete" && %:h/%:r<%:p:h/in<CR>

set is " incsearch, useful for replacing

let g:netrw_banner=0
let g:netrw_winsize=25
let g:netrw_liststyle=3
let g:netrw_altv=1
let g:netrw_browse_split=4

" --------  Not for competition, For daily use only

no <F7> :!cf test<CR>
no <F8> :!cf submit<CR>

set scrolloff=5

let mapleader=";"
nnoremap <leader>w :w<CR>
nnoremap <leader>ct :!cf test<CR>
nnoremap <leader>cs :!cf submit<CR>
nnoremap h <C-w>h
nnoremap j <C-w>j
nnoremap k <C-w>k
nnoremap l <C-w>l
nnoremap <C-p> :FZF<CR>

set rtp+=/opt/homebrew/opt/fzf
