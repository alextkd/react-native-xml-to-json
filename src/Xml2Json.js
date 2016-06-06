'use strict';

import invariant from 'fbjs/lib/invariant';

import {
    NativeModules
} from 'react-native';

let RCTXml2Json = NativeModules.Xml2Json;

/**
* XML to JSON parser with native bridge
*/
let Xml2Json = {
    /**
     * Parse the XML string and returns a JSON
     */
    toJson(XMLString, callback: Function) {
        invariant(
            typeof callback === 'function',
            'Must provide a valid callback'
        );
        RCTXml2Json.toJson(XMLString, callback);
    }

};
export default Xml2Json;
