//
//  XTJSONObject.h
//  XTUtils
//
//  Created by uranpro on 23.06.11.
//  Copyright 2011 xtraVoid. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSStringEncoding const XTJSONObjectDefaultEncoding;

@interface XTJSONObject : NSObject

// Init methods
// Main init method
- (id)initWithJSONDict:(NSDictionary *)d;

- (id)initWithJSONString:(NSString *)str;
- (id)initWithJSONData:(NSData *)data;
- (id)initWithJSONData:(NSData *)data withEncoding:(NSStringEncoding)encoding;

// Factory methods
+ (id)object;
+ (id)objectFromJSONDict:(NSDictionary *)d;
+ (id)objectFromJSONString:(NSString *)str;
+ (id)objectFromJSONData:(NSData *)data withEncoding:(NSStringEncoding)encoding;
+ (id)objectFromJSONData:(NSData *)data;

+ (NSArray *)objectsFromJSONArrayString:(NSString *)str;
+ (NSArray *)objectsFromJSONArrayDict:(NSDictionary *)d;
+ (NSArray *)objectsFromJSONArrayData:(NSData *)data;
+ (NSArray *)objectsFromJSONArrayData:(NSData *)data withEncoding:(NSStringEncoding)encoding;

@end
