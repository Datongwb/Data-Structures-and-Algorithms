# Data Structures and Algorithms

> 一个持续更新的数据结构与算法学习仓库，使用 Java、Python 和 C 实现经典算法与编程练习，记录解题思路、代码实现和复杂度分析。

## 📌 About

本仓库用于记录个人学习数据结构与算法的过程，整理常见数据结构、算法思想及经典编程题目。

通过多语言实现和对比，加深对算法原理、代码实现以及不同编程语言特性的理解。

**主要使用语言：**
- Java
- Python
- C

## 📂 Repository Structure

```text
Data-Structures-and-Algorithms/
│
├── 01-Array/                  # 数组
├── 02-LinkedList/             # 链表
├── 03-Stack-and-Queue/        # 栈与队列
├── 04-HashTable/              # 哈希表
├── 05-Tree/                   # 树与二叉树
├── 06-Heap/                   # 堆
├── 07-Graph/                  # 图
├── 08-Searching/              # 搜索算法
├── 09-Sorting/                # 排序算法
├── 10-Recursion/              # 递归与回溯
├── 11-Greedy/                 # 贪心算法
├── 12-DynamicProgramming/     # 动态规划
├── 13-String/                 # 字符串
│
├── .gitignore
└── README.md
```

每个分类目录下，可以按照编程语言分别整理代码：

```text
01-Array/
├── Java/
├── Python/
└── C/
```

## 🧠 Learning Progress

### Data Structures

- [ ] Array（数组）
- [ ] Linked List（链表）
- [ ] Stack（栈）
- [ ] Queue（队列）
- [ ] Hash Table（哈希表）
- [ ] Tree（二叉树）
- [ ] Heap（堆）
- [ ] Graph（图）

### Algorithms

- [ ] Searching（搜索）
- [ ] Sorting（排序）
- [ ] Recursion（递归）
- [ ] Backtracking（回溯）
- [ ] Greedy Algorithm（贪心算法）
- [ ] Dynamic Programming（动态规划）
- [ ] Two Pointers（双指针）
- [ ] Sliding Window（滑动窗口）

## 💻 Programming Languages

| Language | Purpose |
|---|---|
| Java | 数据结构与算法的主要练习语言 |
| Python | 快速实现算法与验证思路 |
| C | 理解底层数据结构与内存操作 |

## ⚙️ C 代码命名与运行约定

> 适用环境：Windows + VS Code + MinGW-w64（GDB 8.1）

1. **C 源文件名必须使用纯 ASCII 字符（英文或拼音）**，例如 `01-guanyanshui.c` 而不是 `01-挂盐水.c`。
   中文可以写在文件头注释和 `printf` 字符串里，不受影响。
2. 原因是 Windows 版 GDB 8.1 只按系统 ANSI（中文系统为 GBK）编码解析路径，
   而 VS Code 以 UTF-8 传递路径。文件名含中文时编译能成功，但调试会报：
   `Unable to start debugging. Program path ... is missing or invalid` 或
   `No such file or directory`。
3. 运行 exe 时先进入 exe 所在目录，PowerShell 中需加 `.\` 前缀：

   ```powershell
   cd 00-clgo
   .\01-guanyanshui.exe
   ```

4. 若确实需要使用中文文件名，可升级到支持 UTF-8 路径的新版 GDB（如 MSYS2 的
   `mingw-w64-gcc` 13+），或开启 Windows 的“Beta: 使用 Unicode UTF-8 提供全球语言支持”，
   但推荐直接使用 ASCII 文件名，最省事。

## 📝 Problem Records

每道题尽量记录以下内容：

1. **Problem**：题目名称及来源
2. **Approach**：解题思路
3. **Implementation**：代码实现
4. **Complexity**：时间复杂度与空间复杂度
5. **Summary**：解题总结与易错点

## 📈 Learning Goals

- [ ] 掌握常见数据结构及其基本操作
- [ ] 理解常见算法思想与适用场景
- [ ] 能够独立分析时间复杂度和空间复杂度
- [ ] 使用 Java、Python、C 实现经典算法
- [ ] 持续积累算法题目与解题经验
- [ ] 提高算法思维和编程能力

## 🔄 Update Log

| Date | Update |
|---|---|
| 2026-10-31 | Initialize the repository |
| 2026-11-06 | 修复中文文件名导致 VS Code 调试失败的问题，统一 C 源文件命名约定 |

---

⭐ This repository will be continuously updated as I learn and practice.