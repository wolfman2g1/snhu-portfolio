// Render the travel page through Handlebars.
module.exports.travel = function (req, res) {
  res.render("travel", {
    title: "Travel - Travlr Getaways",
    layout: false,
  });
};
