from sklearn.model_selection import GridSearchCV
parameters = {
    'vect__ngram_range': [(1, 2), (1, 3), (1, 4)],
    'vect__stop_words': [['{', '}', '(', ')', '[', ']' ';'], []],
    'tfidf__use_idf': (True, False),
    'clf__alpha': (1e-1, 1e-2, 1e-3),
}
gs_clf = GridSearchCV(code_clf, parameters, n_jobs=-1)
gs_clf = gs_clf.fit(training_data.code, training_data.pragma)

print 'Best Score: {0:.1%}'.format(gs_clf.best_score_)
print 'Best Params:', gs_clf.best_params_
