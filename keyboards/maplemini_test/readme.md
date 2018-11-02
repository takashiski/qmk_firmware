
```make maplemini_test/jis:debug```

or

```make maplemini_test/jis:default```

and

./dfu-util-0.9-win64/dfu-util.exe -d leaf:0003 -a 1 -D ./maplemini_test_jis_debug.bin -R
