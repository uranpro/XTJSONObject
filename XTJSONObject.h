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
- (id)initWithJSONDict:(NSDictionary *)d;

- (id)initWithJSONString:(NSString *)str; // Dont override
- (id)initWithJSONData:(NSData *)data; // Dont override
- (id)initWithJSONData:(NSData *)data withEncoding:(NSStringEncoding)encoding; // Dont override

// Factory methods
+ (id)object;
+ (id)objectFromJSONDict:(NSDictionary *)d; // Dont override
+ (id)objectFromJSONString:(NSString *)str; // Dont override
+ (id)objectFromJSONData:(NSData *)data withEncoding:(NSStringEncoding)encoding; // Dont override
+ (id)objectFromJSONData:(NSData *)data; // Dont override

+ (NSArray *)objectsFromJSONArrayString:(NSString *)str; // Dont override
+ (NSArray *)objectsFromJSONArrayDict:(NSDictionary *)d; // Dont override
+ (NSArray *)objectsFromJSONArrayData:(NSData *)data; // Dont override
+ (NSArray *)objectsFromJSONArrayData:(NSData *)data withEncoding:(NSStringEncoding)encoding; // Dont override

@end
