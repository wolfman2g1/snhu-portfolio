// Render the generated home view when requested through this controller.
module.exports.index = function (req, res) {
  res.render("index", {
    title: "Travlr Getaways",
    layout: "layouts/layout",
  });
};
