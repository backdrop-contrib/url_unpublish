URL Publish and Unpublish
========
<!--
The first paragraph of this file should be kept short as it will be used as the
project summary on BackdropCMS.org. Aim for about 240 characters (three lines at
80 characters each).

All lines in this file should be no more than 80 characters long for legibility,
unless including a URL or example that requires the line to not wrap.
|<- - - - - - - This line is exactly 80 characters for reference - - - - - - ->|

Detail in READMEs should be limited to the minimum required for installation and
getting started. More detailed documentation should be moved to a GitHub wiki
page; for example: https://github.com/backdrop-contrib/setup/wiki/Documentation.
-->

URL Publish and Unpublish enables you to publish and unpublish nodes via a URL.
The URL can either be used in a view or added to a template or block. A 
permission is added to use this link and a confirmation form is provided.

Comparison to Publish Content
-----------------------------

- This module has a similar function to [Publish Content](https://backdropcms.org/project/publishcontent) in that it can provide links to Views.
- This module does not offer the granular permission of Publish Content.
- This module does offer a URL that can be used in other places such as blocks or
templates.

Installation
------------
<!--
List the steps needed to install and configure the module. Add/remove steps as
necessary.
-->

- Install this module using the official Backdrop CMS instructions at
  https://docs.backdropcms.org/documentation/extend-with-modules.


Usage
-------------
<!--
Link to the repository's wiki if more documentation can be found there. Remove
this section if not needed (and consider disabling the wiki in the repo settings
if not used).
-->

Link in template or block:
- Simple link to unpublish node 15
```html
   <a href="/url_unpublish/15'">Unpublish Node</a>
```
- Use more advanced dynamic functions to dynamically include the node ID.

Link in view:
- Click to add a new field
- Search for publish or unpublish and select either:
  - Content: Publish link
  - Content: Unpublish link
- You can optionally add this to the Global Dropbutton; just rearrange so the
link(s) are before the dropbutton.
- You can optionally use Views Conditional to hide and show these links
depending on the status of the node.


Issues
------
<!--
Link to the repo's issue queue.
-->

Bugs and Feature Requests should be reported in the Issue Queue:
https://github.com/backdrop-contrib/mymodule/issues.


Current Maintainers
-------------------
<!--
List the current maintainer(s) of the module, and note if this module needs
new/additional maintainers.
-->

- [Martin Price](https://github.com/yorkshire-pudding) - [System Horizons](https://www.systemhorizons.co.uk)
- Collaboration and co-maintainers welcome!

Credits
-------
<!--
Give credit where credit's due.
If this is a Drupal port, state who ported it, and who wrote the original Drupal
module. If this module is based on another project, or uses third-party
libraries, list them here. You can also mention any organisations/companies who
sponsored the module's development.
-->

- Ported to Backdrop CMS by - [Martin Price](https://github.com/yorkshire-pudding) - [System Horizons](https://www.systemhorizons.co.uk).
- Port sponsored by [System Horizons](https://www.systemhorizons.co.uk).
- Originally written for Drupal by [John Youssef](https://www.drupal.org/u/compujohnny)
- Original development sponsored by [JesoX](https://www.drupal.org/jesox)

License
-------
<!--
Mention what license this module is released under, and where people can find
it.
-->

This project is GPL v2 software.
See the LICENSE.txt file in this directory for complete text.