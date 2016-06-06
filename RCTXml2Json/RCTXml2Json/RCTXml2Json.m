//
//  RCTXml2Json.m
//  RCTXml2Json
//
//  Created by Alexandru Lazar on 6/6/16.
//  Copyright © 2016 Alexandru Lazar. All rights reserved.
//

#import "XMLReader.h"
#import "RCTXml2Json.h"
#import "RCTConvert.h"
#import "RCTLog.h"
#import "RCTUtils.h"
#import "RCTBridge.h"
#import "RCTUIManager.h"
#import "RCTEventDispatcher.h"


@implementation RCTXml2Json


RCT_EXPORT_MODULE()

RCT_EXPORT_METHOD(toJson:(NSString *)XMLString callback:(RCTResponseSenderBlock)callback)
{
    NSError *parseError = nil;
    NSDictionary *xmlDictionary = [XMLReader dictionaryForXMLString:XMLString error:&parseError];
    NSLog(@" %@", xmlDictionary);
    
    NSError *error;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:xmlDictionary
                                                       options:NSJSONWritingPrettyPrinted // Pass 0 if you don't care about the readability of the generated string
                                                         error:&error];
    
    if (! jsonData) {
        NSLog(@"Got an error: %@", error);
        callback(@[error.localizedDescription]);
    } else {
        NSString *jsonString = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
        NSLog(@"%@",jsonString);
        callback(@[jsonString]);
    }
}

@end

