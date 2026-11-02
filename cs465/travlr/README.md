# CS 465 - Travlr Getaways (Module One)

## Run locally

From this directory in PowerShell:

```powershell
npm.cmd ci
npm.cmd start
```

Open http://localhost:3000. Stop the server with Ctrl+C.
Node v20.16.0 and npm v10.8.1 were used for verification.

## Structure

- app.js: Express middleware, static files, routes, and error handling.
- bin/www: HTTP server, default port 3000.
- public/: the seven original course HTML pages.
- public/css/style.css: original course stylesheet.
- public/images/: original course images.
- routes/ and views/: generated Express routes and Handlebars views for later coursework.

The static middleware serves public/index.html at the root URL before the generated index route.
The generator's unused public/stylesheets/style.css is retained; the supplied site uses public/css/style.css.
Dependencies were updated within the Express 4 / HBS 4 families; package-lock.json records installed versions.

## Verification

The homepage and all seven HTML pages returned HTTP 200 in Microsoft Edge via Playwright.
No image or stylesheet requests failed. Screenshot: ../evidence/module1-travlr.png.

npm audit reported one moderate advisory in hbs (GHSA-7f5c-rpf4-86p8), with no fix available at setup.
Retained HBS to match the course guide. Review dependencies again before public deployment.

## Course scope

Module One sets up the Express server and serves the supplied static website.
MongoDB data, APIs, MVC conversion, Angular, and authentication are later modules.
Review the course Project Guidelines and Rubric and client wireframe in Brightspace as well;
those documents were not supplied with this setup request.

## AI assistance acknowledgment

OpenAI Codex assisted with scaffolding Express, importing the supplied static files,
configuring dependencies, verifying pages, and preparing documentation and the ZIP.
Review your course AI policy and adapt this acknowledgment to its required citation format.
