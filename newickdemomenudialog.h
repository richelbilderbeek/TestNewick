#ifndef TOOLTESTNEWICKMENUDIALOG_H
#define TOOLTESTNEWICKMENUDIALOG_H

#include "menudialog.h"


namespace ribi {

struct TestNewickMenuDialog final : public ::ribi::MenuDialog
{
  TestNewickMenuDialog();
  About GetAbout() const noexcept override;
  Help GetHelp() const noexcept override;
  std::string GetVersion() const noexcept override;
  std::vector<std::string> GetVersionHistory() const noexcept override;

  private:
  int ExecuteSpecific(const std::vector<std::string>& argv) noexcept override;
};

} //~namespace ribi

#endif // TOOLTESTNEWICKMENUDIALOG_H
