$compiler = "msvc"

if ($args.Count -ge 1)
{
  $compiler = $args[0]
}

cmake-gui -S . -B build/$compiler --preset=$compiler
