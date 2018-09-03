// test comment
for(int i = 0; i < 10; ++i)
  foo();

#pragma omp
for (int i = 0; i < 10; ++i)
  foo();

#pragma omp parallel for
for (c[ii] = 0; ii < 10; ++ii)
  c[ii] = a[ii];

for (auto &item: a) {
  item = item + 1;
}
