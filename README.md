## 💻 セットアップ手順(Mac)

### 拡張機能を入れる
- C/C++ (Microsoft公式)
- Code Runner

### コンパイラを入れる
macOS → `brew install gcc`

### VS Code設定例 (settings.json)
```json
  "code-runner.executorMap": {
    "cpp": "/opt/homebrew/bin/g++-15 -std=gnu++17 -O2 -Wall -Wextra -isysroot \"$(xcrun --show-sdk-path)\" -o $fileNameWithoutExt $fileName && ./$fileNameWithoutExt < ../../input.txt && rm $fileNameWithoutExt"
  },
  "code-runner.runInTerminal": true,
  "code-runner.saveFileBeforeRun": true,
```

### テスト用コード
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    cout << s << endl;
    return 0;
}
```

→ input.txt にテストを書いて、`Ctrl+Option+N` で実行。

## フォルダ構造

```
atcoder/
├── ABC/
│   ├── 135/
│   │   └── a.cpp
│   └── 136/
│       └── a.cpp
├── input.txt
├── template.cpp
└── .gitignore
```

**注意**: コード実行時に生成される実行ファイル（`a`, `a.out` など）は `.gitignore` で無視され、実行後は自動削除されます。

## 自動生成スクリプト
newcp コマンドを登録（zsh に追加）
```bash
# ~/.zshrc に追加
newcp() {
  contest=$1
  number=$2
  prob=$3
  mkdir -p ~/dev/atcoder/$contest/$number
  cp ~/dev/atcoder/template.cpp ~/dev/atcoder/$contest/$number/${prob}.cpp
  touch ~/dev/atcoder/input.txt
  cd ~/dev/atcoder/$contest/$number
}
```

使い方
```bash
newcp ABC 135 a
```

これで
~/dev/atcoder/ABC/135/a.cpp
がテンプレ入りで自動生成され、そのディレクトリに移動します。
`input.txt` は `~/dev/atcoder/input.txt` に1つだけ作成されます（既に存在する場合は作成されません）。

## template.cpp の例
```cpp
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
using ll = long long;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  // ---- solve ----
  return 0;
}
```