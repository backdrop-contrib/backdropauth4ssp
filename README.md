# BackdropAuth for SimpleSAMLphp

Backdrop CMS + SimpleSAMLphp + backdropauth = Complete SAML Identity Provider (IdP)

This module turns your Backdrop site into an Identity Provider together with backdropauth and simpleSAMLphp.

The backdropauth4ssp provides a tightly integrated login experience, sending unauthenticated users to the Backdrop CMS IdP login page to log in. As a result it removes the requirement to produce a theme for SimpleSAMLphp since the end-user never sees any of the SimpleSAMLphp pages.

## Installation

1. Install this module using the official Backdrop CMS instructions at
  https://backdropcms.org/guide/modules
2. Install [SimpleSAMLphp](https://simplesamlphp.org/) (this module has only been tested with [version 1.19.8](https://github.com/simplesamlphp/simplesamlphp/releases/tag/v1.19.8))
3. Install [backdropauth](https://github.com/argiepiano/simplesamlphp-module-backdropauth). Note: backdropauth is a module of SimpleSAMLphp (NOT a Backdrop module). It's needed to make your Backdrop site into an identity provider (IdP)
4. Configure SimpleSAMLphp to use something other than phpsession for session storage, e.g., SQL or memcache (See: `store.type` in `simplesamlphp/config/config.php`).

IMPORTANT: For detailed configuration steps for SimpleSAMLphp, backdropauth and this module, please visit this module's wiki.

## Configuration

The configuration of this module is fairly straight forward. You will need to know the following information:
1. The path to your local SimpleSAMLphp installation
2. The name of the authentication source that uses the backdropauth:External class (this is in `simplesamlphp/config/authsources.php`). Typically, this name is the URL of your Backdrop IdP site.
3. The allowed list of URLs for ReturnTo parameter. This is a list of allowed URLs where the user can be redirected after logging into the IdP login screen. This list will typically contain all the addresses of the Backdrop Service Provider sites that use the Backdrop IdP site to authenticate users.


## Credits

### Drupal maintainers
- Steve Moitozo [geekwisdom](http://drupal.org/user/1662)

### Backdrop maintainer
- [argiepiano](https://github.com/argiepiano)
- Seeking co-maintainers

## License

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.