from sklearn.model_selection import GridSearchCV
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
clf = Pipeline([('vect', CountVectorizer(ngram_range=(1, 1), stop_words=['{', '}', '(', ')', '[', ']' ';'])),
                ('tfidf', TfidfTransformer(use_idf=False)),
                ('clf', MultinomialNB(alpha=0.1)),
])
training_data = pandas.read_csv(training_data_file)
features_data = pandas.read_csv(features_data_file)
# code_clf = clf.fit(training_data.code, training_data.pragma)


parameters = {
    'vect__ngram_range': [(1, 2), (1, 3), (1, 4)],
    'vect__stop_words': [['{', '}', '(', ')', '[', ']' ';'], []],
    'tfidf__use_idf': (True, False),
    'clf__alpha': (1e-1, 1e-2, 1e-3),
}
gs_clf = GridSearchCV(clf, parameters, n_jobs=-1)
gs_clf = gs_clf.fit(training_data.code, training_data.pragma)

print 'Best Score: {0:.1%}'.format(gs_clf.best_score_)
print 'Best Params:', gs_clf.best_params_
