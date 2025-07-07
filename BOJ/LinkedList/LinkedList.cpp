#include "iostream"
using namespace std;

// 코테용 연결리스트.
const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, int num) 
{
    // addr 다음에 연결 될 새로운 원소. 
    dat[unused] = num;
    // addr, addr와 연결되었던 원소의 기존 연결을 끊고 새로운 원소와 연결.
    int preNxt = nxt[addr];
    if (nxt[addr] != -1)
    {
        pre[preNxt] = unused;
    }
    nxt[addr] = unused;
    // 새로운 원소 연결.
    pre[unused] = addr;
    nxt[unused] = preNxt;
    // 다음 빈 주소.
    ++unused;
}

void erase(int addr) 
{
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void traverse() 
{
    int cur = nxt[0];
    while (cur != -1) 
    {
        cout << dat[cur] << ' ';
        cur = nxt[cur];
    }
    cout << "\n\n";
}

void insert_test() 
{
    cout << "****** insert_test *****\n";
    insert(0, 10); // 10(address=1)
    traverse();
    insert(0, 30); // 30(address=2) 10
    traverse();
    insert(2, 40); // 30 40(address=3) 10
    traverse();
    insert(1, 20); // 30 40 10 20(address=4)
    traverse();
    insert(4, 70); // 30 40 10 20 70(address=5)
    traverse();
}

void erase_test() 
{
    cout << "****** erase_test *****\n";
    erase(1); // 30 40 20 70
    traverse();
    erase(2); // 40 20 70
    traverse();
    erase(4); // 40 70
    traverse();
    erase(5); // 40
    traverse();
}

int main(void)
{
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);
    insert_test();
    erase_test();
}