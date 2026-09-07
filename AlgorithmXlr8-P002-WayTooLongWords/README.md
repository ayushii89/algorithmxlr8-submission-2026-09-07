<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Way Too Long Words

**Difficulty:** `Easy`

## Problem

Sometimes we use abbreviations to make long words shorter. For example, "localization" becomes "l10n", and "internationalization" becomes "i18n".

You are given n words. For each word, if it has more than 10 letters, replace it by a short form. The short form keeps the first letter and the last letter, and puts the count of the letters between them in the middle. Words with 10 letters or fewer are printed exactly as they are.

Read n from standard input, followed by n words, one per line. Print n lines, each the original word or its short form.

## Examples

### Example 1

**Input**
```
n = 4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
```
**Output**
```
word
l10n
i18n
p43s
```

**Explanation:** word has 4 letters, so it stays unchanged. The other three words are longer than 10 letters, so each is shortened.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/cf-71a-way-too-long-words).