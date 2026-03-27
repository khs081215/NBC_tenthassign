#  회전하는 펭귄 (Module & Plugin 연습)

언리얼 엔진 5를 활용하여 제작한 간단한 모듈과 플러그인입니다.
펭귄이 회전합니다

---

## 주요 구현 기능

### 1. 'MySpartaLog' 모듈 생성
* **커스텀 로그:** 모듈 임포트 후, #include "MySpartaLog/MySpartaLog.h"를 인클루드하면, LogMySpartaModule 커스텀 로그 카테고리로 로그를 남길 수 있습니다.

### 2. 'MyNBCLog' 플러그인 생성
* **커스텀 로그:** 플러그인 임포트 후, #include "MyNBCLog/MyNBCLog.h"를 인클루드하면, LogMyNBCPlugin 커스텀 로그 카테고리로 로그를 남길 수 있습니다.
* **회전하는 펭귄:** APluginTestActor를 스폰하면 펭귄이 회전합니다


---

##  기술 스택
* **Engine:** Unreal Engine 5

---
## 프로젝트 구조

```
Source/
├── ModuleAndPlugin/     # Main ThirdPerson Project (PlayerCharacter, GameMode)
└── MySpartaLog/         # 모듈 (MySpartaLog, TestActor)

Plugins/MyNBCLog/        # Plugin
├── Content/             # 에셋(Static Mesh)
├── Source/MyNBCLog/     # 소스 (MyNBCLog, PluginTestActor)
└── MyNBCLog.uplugin     # Plugin 설정값
```

##  플러그인 설치 방법
1. Plugins 폴더를 다운받습니다.
2. 적용하려는 언리얼 프로젝트 폴더 내에 Plugins 폴더를 생성합니다. (이미 존재한다면 생략)
3. Plugins 폴더의 MyNBCLog 폴더를 프로젝트의 Plugins 폴더 위치로 복사해 넣습니다.
4. 언리얼 에디터를 실행하여 프로젝트를 열람할 때, 모듈 리빌드가 필요하다는 팝업이 뜨면 **[Yes]**를 눌러 플러그인을 컴파일합니다.
5. 에디터 진입 후, 상단 메뉴 Edit > Plugins 창에서 MyNBCLogPlugin 이 활성화(Enabled)되어 있는지 확인합니다.


