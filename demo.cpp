#include <iostream>
namespace myspace{
    void sayHello()
    {
        std::cout << "Hello, world form myspace!"<< std::endl;
    }
}

int main()
{
myspace::sayHello();
return 0;
}
Great question! In Ubuntu terminal, pasting depends on the environment you're using. Here are common ways:

---

### 🖱️ **Using Mouse (Right-click)**
- **Right-click** inside the terminal → select **Paste**

---

### ⌨️ **Using Keyboard Shortcuts**
#### If you're using the **default GNOME Terminal**:
- **Paste**: `Ctrl + Shift + V`
- **Copy**: `Ctrl + Shift + C`

#### If you're using **tmux** or **screen**, the shortcuts are different.

---

### 📋 From Menus (Optional)
- In some terminals, you can go to the top menu bar → **Edit > Paste**

---

### ✅ Example
If you copied the `README.md` content, just open your terminal and:

1. Run:
   ```bash
   nano README.md
   ```

2. **Paste** using `Ctrl + Shift + V`

3. Save by pressing:
   - `Ctrl + O` → press **Enter**
   - Then `Ctrl + X` to exit

Let me know which terminal you're using if this doesn’t work!