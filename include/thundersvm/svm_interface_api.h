//#include "iostream.h"
#ifdef __cplusplus
extern "C" {
#endif
    void thundersvm_train(int argc, char **argv);
    void thundersvm_train_after_parse(char **option, int len, char *file_name, const DataSet::node2d &support_vectors);
    void thundersvm_predict(int argc, char **argv);
    void thundersvm_predict_after_parse(char *model_file_name, char *output_file_name, char **option, int len, const DataSet::node2d &support_vectors);
#ifdef __cplusplus
}
#endif
