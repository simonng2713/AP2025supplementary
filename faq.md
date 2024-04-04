# FAQ

## Git関連

### pushしようとしたとき，ユーザー名とメールアドレスを設定してください的なことを言われる．

設定しましょう．

- Windows(wsl):  /home/【ユーザー名】/.ssh/ .gitconfig
- Mac: /Users/ 【ユーザー名】/.gitconfig

というファイルに，ユーザー名とメールアドレスの設定を書き込んで下さい．

例えば，杉本（name:Yasuhiro Sugimoto, メールアドレス: yas@mech.eng.osaka-u.ac.jp）なら，以下の様に追記します．

```
[user]
        name = Yasuhiro Sugimoto
        email = yas@mech.eng.osaka-u.ac.jp
```

.gitconfigファイルがなければ，上記を記入したファイルを上記の場所に.gitconfigとして保存してください．

## VScode関連

### includeのところのエラーを消したい．

（安易な解決方法） Visual Studioをインストールする．

## Cmake関連

### 関数sqrtを使おうとするとエラーがでる

（windowsで）関数sqrtを使うときは，数学ライブラリー(libm.so)をリンクして下さい．CMakeLists.txtのtarget_link_librariesのところに，　m を付け加えれば大丈夫のはずです．

### ADD_LIBRARY called with SHARED option but the target platform does not support dynamic linking　といったwarningがでる．

CMakeLists.txtにおいて，プロジェクト名を設定するproject()行よりも前に，add_library()の行が出てくると，このようなエラーがでるようです．project()の行を，cmake_minimum_required()の直後ぐらいに書いてみて下さい．

