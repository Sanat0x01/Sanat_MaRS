## Behaviour Tree Structure

Root (Selector)
    ├── Battery Check (Selector Node)
    │      ├── Battery is critically low(<20%): Return to base
    │      ├── Battery is low (but not critical)(>20% but <50%): Turn off non-essential systems like cameras
    │      └── Battery is fine(>50%): Proceed normally
    |
    |
    |
    └── Navigation Check (Sequence Node)
           ├── Move forward
           ├── Obstacle detected (Check size)
                  ├── Small obstacle: Change direction a little and pass
                  └── Large obstacle: Change alternate path or stop
