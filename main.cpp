#include <exception>
#include <iostream>
#include <ostream>
#include <string>
#include <optional>

#include <rang.hpp>
#include <cxxopts.hpp>

struct Style
{
    rang::style style = rang::style::reset;
    rang::bg bg = rang::bg::reset;
    rang::fg fg = rang::fg::reset;

    friend std::ostream& operator << (std::ostream & ostr, const Style & style)
    {
        return ostr << style.style << style.bg << style.fg;
    }
};

const Style NO_STYLE = Style{};

auto getOpions(int argc, char** argv)
{
    cxxopts::Options options("greeter", "This is a simple greeter app.");
    options.add_options()
            ("h,help", "Print help")
            ("no-style", "Do not style console output", cxxopts::value<bool>()->default_value("false"))
            ("name", "Name to greet, turns off interactive mode",  cxxopts::value<std::vector<std::string>>());

    auto result = options.parse(argc, argv);

    if (result.count("help"))
    {
        std::cout << "Type your name to be greeted or leave input empty to exit." << options.help() << std::endl;
        exit(0);
    }

    return result;
}

template <typename T>
void greet(std::ostream & ostr, const T& name, std::optional<Style> style)
{
    ostr << "Hello, ";
    if (style)
        ostr << *style;

    ostr << name;

    if (style)
        ostr << NO_STYLE;

    ostr << "!" << std::endl;
}

int main(int argc, char** argv)
{
    auto options = getOpions(argc, argv);

    const std::optional<Style> name_style = options.count("no-style")
        ? std::nullopt
        : std::optional<Style>{Style{
        .style = rang::style::bold,
        .bg = rang::bg::red,
        .fg = rang::fg::gray
    }};

    if (options.count("name"))
    {
        const auto names = options["name"].as<std::vector<std::string>>();
        for (const auto & name : names)
        {
            greet(std::cout, name, name_style);
        }

        return 0;
    }

    // Interactive mode
    while (true)
    {
        std::string name;
        std::cout << "> ";
        std::getline(std::cin, name);

        if (name.empty())
            return 0;

        greet(std::cout, name, name_style);
    }

    return 0;
}
