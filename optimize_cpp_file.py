from sklearn.feature_extraction.text import CountVectorizer
from sklearn.feature_extraction.text import TfidfTransformer
from sklearn.naive_bayes import MultinomialNB
from sklearn.pipeline import Pipeline
import pandas
import numpy
import sys

# Name the command line args
training_data_file = sys.argv[1]
features_data_file = sys.argv[2]
old_cpp_file = sys.argv[3]
new_cpp_file = sys.argv[4]

# Train and predict
clf = Pipeline([('vect', CountVectorizer()),
                ('tfidf', TfidfTransformer()),
                ('clf', MultinomialNB()),
])
training_data = pandas.read_csv(training_data_file)
features_data = pandas.read_csv(features_data_file)
code_clf = clf.fit(training_data.code, training_data.pragma)
predicted = code_clf.predict(features_data.code)

# Create list with line numbers of for loops which should get a #pragma annotation
all_for_loop_lines = features_data.line.tolist()
for_loop_lines = []
for i, possible_for_loop_line in enumerate(all_for_loop_lines):
  if predicted[i] == 1:
    print 'line', i, 'in file', old_cpp_file, 'is true.'
    for_loop_lines.append(possible_for_loop_line)

# Generate optimized file line by line
with open(old_cpp_file) as old_cpp_file:
  with open(new_cpp_file, 'w') as new_cpp_file:
    for for_loop_line in for_loop_lines:
      for cnt, code_line in enumerate(old_cpp_file):
        # Insert a pragma annotation line if necessary
        if for_loop_lines and cnt + 1 == for_loop_lines[0]:
          new_cpp_file.write('#pragma omp parallel for\n')
          for_loop_lines.pop(0)
        # Always insert the original code line
        new_cpp_file.write(code_line)
