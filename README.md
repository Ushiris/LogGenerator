# LogGenerator
　このプロジェクトはUE4(22.3)で作成されています。その他のバージョンでの動作は確認でき居ていません。おそらく、関数用ブループリントが存在するバージョンでは動作すると思われます。

# 説明書
- Log Write 関数でLogを作成することができます。引数は出力したい文字列(string型の配列)とファイル名(String型)です。
- .csv用に作ってあるのですが、引数にも.csvまで入力する必要があることにご留意ください。
- 引数に既存ファイルの名称が入るとそのファイルを上書きしてしまうのでぷっろジェクト内のファイルを上書きしない様に気を付けてください。
- ファイルはプロジェクトファイル内に作成されます。おそらく書き出し後は.exeっと同一のフォルダ。

# 今後の方針
- 今回は断念してしまいましたが、Google Driveにうｐできるようにしたい。OAuth2.0認証とHttps通信の実装について深く理解する必要あり。

# 参考にさせていただいたサイト等
- Victory Prugin 多分最終版には使われていませんが…
- http://api.unrealengine.com/JPN/Programming/Plugins/ プラグインの入れ方があやふやだったので。
- http://htsuda.net/archives/1815 最終的にはここを参考にしました。
- https://qiita.com/mofumonta/items/bb1d2922c13aaf135017 OAuth2.0認証を受けるためにJavaScriptを使おうとしたときに参考にしました。
- https://duktape.org/ JavaScriptをC++で動かす素晴らしいもの。UE4では動かなかったので断念。
- https://takamints.hatenablog.jp/entry/google-oauth2-authorization-by-node-js OAuth2.0認証を受けるコードの参考。
