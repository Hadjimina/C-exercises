
struct complex
{
  double a,b;
};

complex add(complex first,complex second);
complex sub(complex first,complex second);
complex mult(complex first,complex second);
complex div(complex first,complex second);
void print(complex toPrint);


struct complex_set {
  int num_points_in_set;
  struct complex *points; // an array of struct complex
};

struct complex_set *alloc_set(struct complex c_arr[], int size);
void free_set(struct complex_set *set);

void printSet(complex_set toPrint);
