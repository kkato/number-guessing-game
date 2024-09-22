# 数当てゲーム

C言語で作成されたシンプルな数当てゲームです。
プログラムが1から100までのランダムな数字を生成し、ユーザーがその数字を当てるゲームです。
ユーザーが入力した数に対して、正解より大きいか小さいかのヒントが表示され、正解するまで繰り返します。

## 機能
- プログラムは1から100までのランダムな数字を生成します。
- ユーザーはその数字を予想し、大きいか小さいか、または正解かどうかのフィードバックを受け取ります。
- 正解するまでゲームは続きます。

## 実行方法

1. **リポジトリをクローン**:

    ```bash
    git clone https://github.com/kkato/number-guessing-game.git
    cd number-guessing-game
    ```

2. **プログラムをコンパイル**:

    ```bash
    gcc -o number-guessing-game main.c
    ```

3. **プログラムを実行**:

    ```bash
    ./number-guessing-game
    ```

4. **ゲームの流れ**:
   - プログラムは1から100までの数を予想するように促します。
   - 数字を入力すると、プログラムがそれが大きいか、小さいか、または正解かを教えてくれます。
   - 正解するまで数字を予想してください。

## 実行例

```
1から100までの数を当ててください。
数を入力してください: 50
もっと小さいです。
数を入力してください: 25
もっと大きいです。
数を入力してください: 30
正解です！
```
