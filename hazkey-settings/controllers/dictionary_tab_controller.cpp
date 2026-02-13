#include "controllers/dictionary_tab_controller.h"

namespace hazkey::settings {

DictionaryTabController::DictionaryTabController(QObject* parent)
    : QObject(parent) {}

void DictionaryTabController::setContext(const TabContext& context) {
    context_ = context;
}

void DictionaryTabController::loadFromConfig() {}

void DictionaryTabController::saveToConfig() {}

}  // namespace hazkey::settings
