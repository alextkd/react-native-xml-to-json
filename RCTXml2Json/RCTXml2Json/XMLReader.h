//
//  XMLReader.h
//  RCTXml2Json
//
//  Created by Alexandru Lazar on 6/6/16.
//  Copyright © 2016 Alexandru Lazar. All rights reserved.
//

#ifndef XMLReader_h
#define XMLReader_h

#import <Foundation/Foundation.h>

@interface XMLReader : NSObject
{
    NSMutableArray *dictionaryStack;
    NSMutableString *textInProgress;
    NSError *errorPointer;
}

+ (NSDictionary *)dictionaryForXMLData:(NSData *)data error:(NSError **)errorPointer;
+ (NSDictionary *)dictionaryForXMLString:(NSString *)string error:(NSError **)errorPointer;

@end

#endif /* XMLReader_h */
