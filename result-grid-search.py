from sklearn.feature_extraction.text import CountVectorizer
from sklearn.feature_extraction.text import TfidfTransformer
from sklearn.naive_bayes import MultinomialNB
from sklearn.pipeline import Pipeline
import pandas
import numpy
import sys

# Name the command line args
training_data_file = 'code/_train.csv'
features_data_file = 'code/_test.csv'

# Train and predict
clf = Pipeline([('vect', CountVectorizer(ngram_range=(1, 3), stop_words=['{', '}', '(', ')', '[', ']' ';'])),
                ('tfidf', TfidfTransformer(use_idf=False)),
                ('clf', MultinomialNB(alpha=0.1)),
])
training_data = pandas.read_csv(training_data_file)
features_data = pandas.read_csv(features_data_file)
code_clf = clf.fit(training_data.code, training_data.pragma)
predicted = code_clf.predict(features_data.code)

print 'Precision on test data: {0:.1%}'.format(numpy.mean(predicted == features_data.pragma))
print 'Precision on training data: {0:.1%}'.format(numpy.mean(code_clf.predict(training_data.code) == training_data.pragma))
print 'Size of test data:', len(features_data.index)
print 'Size of training data:', len(training_data.index)
print 'Percentage of for loops with annotation in training data: {0:.1%}'.format(numpy.mean(training_data.pragma))
print 'Percentage of for loops with annotation in test data: {0:.1%}'.format(numpy.mean(features_data.pragma))
print 'Percentage of for loops with annotation in prediction: {0:.1%}'.format(numpy.mean(predicted))
