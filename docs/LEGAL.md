# Legal Notice and Terms of Use

Nostos is a **research and education framework** for studying
command-and-control (C2) communication. It exists so that defenders,
students, and analysts can understand how implants beacon, how tasks are
delivered, and how such traffic can be detected.

This document defines what you are allowed to do with this software and
what you are not. It is part of the project's terms of use. If you do not
agree with it, do not use, copy, or distribute this software.

---

## 1. Permitted Use

You may use Nostos **only** under the following conditions:

### 1.1 Isolated lab environments

You may run the implant and controller only on systems you own or are
explicitly authorized to use, and only in a lab environment that is
isolated from production networks and the public internet.

Acceptable isolation:
- Virtual machines on your own hardware
- Host-only or internal-only virtual networks
- Snapshots that can be rolled back after each test
- No routing to third-party networks

### 1.2 Your own systems

You may run the implant on machines you own, or on machines for which
you hold written authorization from the owner. Authorization must be
specific, current, and cover the exact systems and time window of use.

### 1.3 Research and education

You may use Nostos for:
- Studying C2 architecture and beaconing behavior
- Building and testing detection rules
- Teaching malware analysis, incident response, or network forensics
- Academic research on C2 detection, with proper ethics review where
  required by your institution

### 1.4 Defensive analysis

You may use the controller's analyzers on traffic and artifacts you
collected lawfully, for the purpose of detection engineering and
incident response.

---

## 2. Prohibited Use

The following are **not permitted**, regardless of intent:

### 2.1 Unauthorized systems

You may not run the implant, controller, or any part of Nostos against
any system, network, or account that you do not own or have explicit
written permission to test. This includes:
- Scanning, probing, or connecting to third-party hosts
- Deploying the implant on someone else's machine
- Using Nostos as part of a penetration test without a signed scope
  and authorization document

### 2.2 Production and public networks

You may not run Nostos on production systems, corporate networks,
public cloud instances, or any network connected to the public internet,
except in a fully isolated segment you control and can guarantee is not
reachable from outside.

### 2.3 Harmful functionality

You may not add, enable, or distribute functionality whose primary
purpose is to cause harm, including:
- Ransomware, file encryption for extortion, or wipers
- Credential theft, keylogging, or session hijacking against real users
- Data exfiltration from systems you do not own
- Lateral movement into networks you are not authorized to access
- Denial-of-service or resource exhaustion
- Persistence on systems you do not own
- Anti-forensics designed to obstruct a lawful investigation

### 2.4 Distribution of malware

You may not use this repository to distribute, host, or deliver
malware, exploit payloads, or any code intended for unauthorized access.
Do not attach real malware samples to issues, pull requests, or
releases.

### 2.5 Concealment

You may not remove, hide, or alter this notice or the disclaimers in the
project's README when redistributing the software.

### 2.6 Commercial offensive use

You may not use Nostos as a product or service for offensive security
work without independent legal review, a written scope agreement with
the client, and compliance with all applicable laws in your
jurisdiction.

### 2.7 Circumvention of law

You may not use Nostos to violate any applicable law, including computer
misuse laws, privacy laws, data protection laws, or export control
regulations in your country.

---

## 3. Responsibility of the User

You are solely responsible for:
- Determining whether your use is lawful in your jurisdiction
- Obtaining all necessary authorizations before testing
- Isolating your lab environment
- Keeping backups and snapshots
- Any consequences of running this software

Ignorance of the law is not a defense. If you are unsure whether a
planned use is permitted, do not proceed until you have clarified it with
a qualified professional.

---

## 4. No Warranty

This software is provided "as is", without warranty of any kind, express
or implied, including but not limited to the warranties of
merchantability, fitness for a particular purpose, and
non-infringement.

The software may contain bugs, may behave unexpectedly, and may damage
systems on which it runs. You use it at your own risk.

---

## 5. Limitation of Liability

In no event shall the authors or copyright holders be liable for any
claim, damages, or other liability, whether in an action of contract,
tort, or otherwise, arising from, out of, or in connection with the
software or the use or other dealings in the software.

This includes, without limitation, damages for loss of data, loss of
profits, business interruption, or legal consequences resulting from
misuse.

---

## 6. Reporting Misuse

If you become aware of misuse of this project, or if you find a security
issue in the code, please report it according to `SECURITY.md` in the
repository root. Do not open a public issue for security reports.

---

## 7. Changes

This notice may be updated as the project evolves. The version in the
repository at the time of use is the version that applies.

---

## 8. Summary

**Allowed:** isolated lab, own systems, written authorization,
research, education, detection engineering.

**Not allowed:** third-party systems, production networks, harmful
functionality, malware distribution, concealment, unauthorized
offensive work.

If in doubt: **do not run it.**
