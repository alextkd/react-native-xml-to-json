//
//  RCTXMLReader.h
//  RCTXml2Json
//
//  Created by Alexandru Lazar on 6/6/16.
//  Copyright © 2016 Alexandru Lazar. All rights reserved.
//

#ifndef XMLReader_h
#define XMLReader_h

#import <Foundation/Foundation.h>

enum {
    RCTXMLReaderOptionsProcessNamespaces           = 1 << 0, // Specifies whether the receiver reports the namespace and the qualified name of an element.
    RCTXMLReaderOptionsReportNamespacePrefixes     = 1 << 1, // Specifies whether the receiver reports the scope of namespace declarations.
    RCTXMLReaderOptionsResolveExternalEntities     = 1 << 2, // Specifies whether the receiver reports declarations of external entities.
};
typedef NSUInteger RCTXMLReaderOptions;

@interface RCTXMLReader : NSObject <NSXMLParserDelegate>

+ (NSDictionary *)dictionaryForXMLData:(NSData *)data error:(NSError **)errorPointer;
+ (NSDictionary *)dictionaryForXMLString:(NSString *)string error:(NSError **)errorPointer;
+ (NSDictionary *)dictionaryForXMLData:(NSData *)data options:(RCTXMLReaderOptions)options error:(NSError **)errorPointer;
+ (NSDictionary *)dictionaryForXMLString:(NSString *)string options:(RCTXMLReaderOptions)options error:(NSError **)errorPointer;

@end

#endif /* XMLReader_h */
