#include <fstream>
#include <filesystem>
#include <iostream>

auto main(void) -> int
{
	std::cout << "Enter file name:\n";
	std::string file;
	std::getline(std::cin, file);
	if (std::filesystem::exists(file + "/info.yml"))
	{
		std::filesystem::remove(file + "/info.yml");
	}
	std::ofstream ofs(file + "/info.yml");
	if (!std::filesystem::exists(file + "/info.yml"))
	{
		std::cerr << "cannot create new file";
		getchar();
		getchar();
		exit(0);
	}
	std::string name;
	std::cout << "Enter project name:\n";
	std::getline(std::cin, name);
	ofs << "name: \"" << name << "\"\n";
	std::string author;
	std::cout << "Enter author name:\n";
	std::getline(std::cin, author);
	ofs << "author: \"" << author << "\"\n";
	std::string description;
	std::cout << "Enter description:\n";
	std::getline(std::cin, description);
	ofs << "description: \"" << description << "\"\n";
	int hitFx1, hitFx2;
	std::cout << "Enter hitFx(wide&height) of hit_fx.png:\n";
	std::cin >> hitFx1 >> hitFx2;
	std::cin.ignore();
	ofs << "hitFx: [" << hitFx1 << ", " << hitFx2 << "]\n";
	int holdAtlas1, holdAtlas2, holdAtlasMH1, holdAtlasMH2;
	std::cout << "Enter atlas of hold:\n";
	std::cin >> holdAtlas1 >> holdAtlas2;
	std::cin.ignore();
	std::cout << "Enter atlas of multy hold:\n";
	std::cin >> holdAtlasMH1 >> holdAtlasMH2;
	std::cin.ignore();
	ofs << "holdAtlas: [" << holdAtlas1 << ", " << holdAtlas2 << "]\n"
		<< "holdAtlasMH: [" << holdAtlasMH1 << ", " << holdAtlasMH2 << "]\n";
	std::string hitFxDuration;
	std::cout << "Enter duration(seconds) of hit:\n";
	std::cin >> hitFxDuration;
	std::cin.ignore();
	ofs << "hitFxDuration: " << hitFxDuration << "\n";
	std::string hitFxScale;
	std::cout << "Enter scale of hit:\n";
	std::cin >> hitFxScale;
	std::cin.ignore();
	ofs << "hitFxScale: " << hitFxScale << "\n";
	std::string colorPerfect;
	std::cout << "Enter color of perfect:\n";
	std::cin >> colorPerfect;
	std::cin.ignore();
	ofs << "colorPerfect: " << colorPerfect << "\n";
	std::string colorGood;
	std::cout << "Enter color of good:\n";
	std::cin >> colorGood;
	std::cin.ignore();
	ofs << "colorGood: " << colorGood;
	ofs.close();
	getchar();
	getchar();
	
	return 0;
}
