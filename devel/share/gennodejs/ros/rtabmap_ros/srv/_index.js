
"use strict";

let PublishMap = require('./PublishMap.js')
let SetGoal = require('./SetGoal.js')
let GetMap2 = require('./GetMap2.js')
let SetLabel = require('./SetLabel.js')
let LoadDatabase = require('./LoadDatabase.js')
let ResetPose = require('./ResetPose.js')
let ListLabels = require('./ListLabels.js')
let GetNodeData = require('./GetNodeData.js')
let GetPlan = require('./GetPlan.js')
let GetNodesInRadius = require('./GetNodesInRadius.js')
let AddLink = require('./AddLink.js')
let GetMap = require('./GetMap.js')

module.exports = {
  PublishMap: PublishMap,
  SetGoal: SetGoal,
  GetMap2: GetMap2,
  SetLabel: SetLabel,
  LoadDatabase: LoadDatabase,
  ResetPose: ResetPose,
  ListLabels: ListLabels,
  GetNodeData: GetNodeData,
  GetPlan: GetPlan,
  GetNodesInRadius: GetNodesInRadius,
  AddLink: AddLink,
  GetMap: GetMap,
};
