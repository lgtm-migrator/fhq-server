#ifndef ARGUMENT_PROCESSOR_CONFIG_H
#define ARGUMENT_PROCESSOR_CONFIG_H

#include <wsjcpp_arguments.h>

class ArgumentProcessorConfig : public WsjcppArgumentProcessor {
    public:
        ArgumentProcessorConfig();
        virtual int exec(const std::vector<std::string> &vRoutes, const std::vector<std::string> &vSubParams) override;
};

class ArgumentProcessorConfigTest : public WsjcppArgumentProcessor {
    public:
        ArgumentProcessorConfigTest();
        virtual int exec(const std::vector<std::string> &vRoutes, const std::vector<std::string> &vSubParams) override;
};

class ArgumentProcessorConfigPrint : public WsjcppArgumentProcessor {
    public:
        ArgumentProcessorConfigPrint();
        virtual int exec(const std::vector<std::string> &vRoutes, const std::vector<std::string> &vSubParams) override;
};

class ArgumentProcessorConfigTestEmail : public WsjcppArgumentProcessor {
    public:
        ArgumentProcessorConfigTestEmail();
        virtual int exec(const std::vector<std::string> &vRoutes, const std::vector<std::string> &vSubParams) override;
};

#endif // ARGUMENT_PROCESSOR_CONFIG_H
