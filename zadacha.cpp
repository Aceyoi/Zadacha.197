/// ������� ���������� ������������ �� i �� n (Ai-Bi)^2


// ��� Ai = i,���� i ��������
//          i/2 � ��������� ������
// ��� Bi = i^2, ���� i ��������
//          i^3 � ��������� ������
// �� ����� ���� float �.�. �������� � ���������� ���������������� ������ �� ����� �����

// ���������� Ai � �������
size_t receivingA(int i) {
    size_t a;
    if ((i + 1) % 2 == 1)
    {
        a = i + 1;
    }
    else// ���� i ������
    {
        a = (i + 1) / 2;
    }
    return a;
}

// ���������� Bi � �������
size_t receivingB(int i) {
    size_t b;
    if ((i + 1) % 2 == 1)
    {
        b = (i + 1) * (i + 1);
    }
    else// ���� i ������
    {
        b = (i + 1) * (i + 1) * (i + 1);
    }
    return b;
}

// ���������� (Ai-Bi) � �������
size_t receivingDIFF(int i) {
    size_t diff = receivingA(i) - receivingB(i);
    return diff;
}

// ���������� ������ ������� � ����� �
size_t summa(int n) {
    size_t sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        sum += receivingDIFF(i) * receivingDIFF(i);
    }
    return sum;
}

// �����
void testcheck() {
    assert(summa(5) == 4329);
    assert(receivingA(5) == 3);
    assert(receivingB(5) == 216);
    assert(receivingDIFF(5) == 18446744073709551403);

}