#ifndef __SWATCH_MP7_CMDS_DELETEFIRMWARECOMMAND_HPP__
#define __SWATCH_MP7_CMDS_DELETEFIRMWARECOMMAND_HPP__

#include <string>                       // for string

#include "swatch/action/Command.hpp"


namespace swatch {
namespace mp7 {
namespace cmds {

/**
 * @class      DeleteFirmwareCommand
 *
 * Deletes firmware image from the on-board SD card
 */
class DeleteFirmware : public ::swatch::action::Command {
public:
  /**
   * @brief      Constructor.
   *
   * @details    Defines input parameters
   *             - sdfile (str)
   *
   * @param[in]  aId          Command identifier
   * @param      aActionable  Target actionable object
   */  
  DeleteFirmware(const std::string& aId, swatch::action::ActionableObject& aActionable);

  /**
   * @brief      Destroys the object.
   */
  virtual ~DeleteFirmware() {}

  /** 
   * @brief      { function_description }
   *
   * @param[in]  aParams  Input parameters
   *
   * @return     Command execution status
   */
  virtual State code(const ::swatch::core::XParameterSet& aParams);
};

} // namespace cmds
} // namespace mp7
} // namespace swatch



#endif /* __SWATCH_MP7_CMDS_DELETEFIRMWARECOMMAND_HPP__ */